//
// Created by fvon-nag on 18.03.24.
//
#include "BitcoinExchange.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Enter a valid list as an argument" << std::endl;
        return 1;
    }

    (void) argv;
    std::ifstream dataBase("data.csv");

    if (!dataBase.is_open()){
        std::cout << "Could not load database" << std::endl;
        return 1;
    }

    std::string line;
    std::map<std::time_t, float> dbmap;
    std::getline(dataBase, line);
    while (std::getline(dataBase, line)){
        int year, month, day;
        char delimiter;
        float exchangeRate; // Assuming exchange rate is a floating point value
        std::istringstream iss(line);

        // Parse date
        if (!(iss >> year >> delimiter >> month >> delimiter >> day) || delimiter != '-') {
            std::cerr << "Invalid date format: " << line << std::endl;
            continue;
        }

        // Read and skip the delimiter before reading the exchange rate
        if (!(iss >> delimiter) || delimiter != ',') {
            std::cerr << "Invalid format: " << line << std::endl;
            continue;
        }

        // Read the exchange rate
        if (!(iss >> exchangeRate)) {
            std::cerr << "Invalid exchange rate format: " << line << std::endl;
            continue;
        }

        // Output parsed date and exchange rate


        std::tm timeinfo = {};
        timeinfo.tm_year = year -1900;
        timeinfo.tm_mon = month -1;
        timeinfo.tm_mday = day;


        dbmap.insert(std::make_pair(std::mktime(&timeinfo), exchangeRate));

    }
    dataBase.close();
 // just wanted to add string to the map for right output maketruple with string maybe struct
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()){
        std::cout << "Could not load input file" << std::endl;
        return 1;
    }


    while(std::getline(inputFile, line)){
        int year, month, day;
        char delimiter;
        float value;

        std::istringstream iss(line);

        if (line == "date | value")
            continue;

        if (!(iss >> std::ws >> year >> std::ws >> delimiter >> std::ws >> month >> std::ws
                >> delimiter >> std::ws >> day) || delimiter != '-'){
            std::cout << "Error: bad input : " << line << std::endl;
            continue;
        }
        if (!(iss >> std::ws >> delimiter) || delimiter != '|'){
            std::cout << "Error: bad input => "  << line << std::endl;
            continue;
        }
        if (!(iss >> std::ws >> value) || value < 0 || value > 1000){
            if (value < 0)
                std::cout << "Error: not a positive number." << std::endl;
            else if (value > 1000)
                std::cout << "Error: too large a number." << std::endl;
            else
                std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }


        if (month > 12 || month < 1 || day > 31 || day < 0)
        {
            std::cout << "Error: invalid Date: " << line << std::endl;
            continue;
        }

        std::tm timeinfo = {};
        timeinfo.tm_year = year - 1900;
        timeinfo.tm_mon = month - 1;
        timeinfo.tm_mday = day;
        std::time_t configtime = mktime(&timeinfo);
        if (configtime == -1)
        {
            std::cout << "Error: invalid Date: " << line << std::endl;
            continue;
        }
        std::map<std::time_t, float>::iterator it = dbmap.upper_bound(configtime);
        if (it != dbmap.begin()){
            --it;
            char buffer[80];
            std::strftime(buffer, sizeof(buffer), "%Y-%m-%d",&timeinfo);
            std::cout << buffer  << " => " << value << " = " << it->second * value << std::endl;
        }


    }
    inputFile.close();

    return 0;
}