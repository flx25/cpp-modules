/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:54:32 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/14 12:59:08 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{

    if (argc != 4)
    {
        std::cout << "Please enter 3 arguments!";
        return ( 1);
    }
    std::string toOpen = argv[1];
    std::string toFind = argv[2];
    std::string replacement = argv[3];
    std::string outputFileName = toOpen + ".replace";
    std::string line;

    std::ifstream inputFile;
    inputFile.open(toOpen, std::fstream::in);
    if (!inputFile.is_open())
    {
        std::cerr << "Failed to open input file." << std::endl;
        return 1;
    }

    std::ofstream outputFile(outputFileName, std::fstream::out);
    if (!outputFile.is_open())
    {
        std::cerr << "Failed to create output file." << std::endl;
        return 1;
    }
    while(std::getline(inputFile,line))
    {
        size_t pos = line.find(toFind);
        while(pos != std::string::npos)
        {
            line.std::string::erase(pos, toFind.std::string::length());
            line.std::string::insert(pos, replacement);
            pos = line.find(toFind);
            if (pos == std::string::npos)
                break;
        }
    outputFile << line << '\n';
    }

    inputFile.close();
    outputFile.close();
    return (0);

}