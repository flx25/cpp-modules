//
// Created by fvon-nag on 03.04.24.
//
#include "PmergeMe.h"

bool custom_cmp(std::pair<int, int> a, std::pair<int, int> b)
{
    if (a.second < b.second)
        return (1);
    return (0);
}

bool allArgumentsDigits(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        for (char *ptr = argv[i]; *ptr != '\0'; ++ptr) {
            if (!std::isdigit(*ptr)) {
                return false;
            }
        }
    }
    return true;
}

bool compareBitwise(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return __builtin_popcount(a.first) < __builtin_popcount(b.first);
}

bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

void binary_search_insertion(std::vector<int> *main_chain, std::vector<int>::iterator end, int val)
{
    std::vector<int>::iterator place_to_insert = std::lower_bound(main_chain->begin(), end, val);
    main_chain->insert(place_to_insert, val);
}

void binary_search_insertionlst(std::list<int> *main_chain, std::list<int>::iterator end, int val)
{
    std::list<int>::iterator place_to_insert = std::lower_bound(main_chain->begin(), end, val);
    main_chain->insert(place_to_insert, val);
}


void swapbysize(std::vector<std::pair<int,int> > &pairvec){
    for (std::vector<std::pair<int, int> >::iterator it = pairvec.begin(); it != pairvec.end(); it++)
    {
        int temp;
        if (it->first > it->second)
        {
            temp = it->first;
            it->first = it->second;
            it->second = temp;
        }
    }

}

void swapbysizelst(std::list<std::pair<int,int> > &pairlst){
    for (std::list<std::pair<int, int> >::iterator it = pairlst.begin(); it != pairlst.end(); it++)
    {
        int temp;
        if (it->first > it->second)
        {
            temp = it->first;
            it->first = it->second;
            it->second = temp;
        }
    }

}

void mergeSort(std::vector<std::pair<int, int> >::iterator start, std::vector<std::pair<int, int> >::iterator end, size_t size)
{
    if (size == 0 && start != end)
        size = std::distance(start,end);
    if (size <= 1)
        return;

    size_t firstHalf = size / 2;
    size_t secondHalf = size - firstHalf;
    std::vector<std::pair<int, int> >::iterator center = start;

    std::advance(center, firstHalf);

    mergeSort(start, center, firstHalf);
    mergeSort(center, end, secondHalf);
    std::inplace_merge(start, center, end, &custom_cmp);

}

void mergeSortlst(std::list<std::pair<int, int> >::iterator start, std::list<std::pair<int, int> >::iterator end, size_t size)
{
    if (size == 0 && start != end)
        size = std::distance(start,end);
    if (size <= 1)
        return;

    size_t firstHalf = size / 2;
    size_t secondHalf = size - firstHalf;
    std::list<std::pair<int, int> >::iterator center = start;

    std::advance(center, firstHalf);

    mergeSortlst(start, center, firstHalf);
    mergeSortlst(center, end, secondHalf);
    std::inplace_merge(start, center, end, &custom_cmp);

}

void insert_into_mainChain(std::vector<std::pair<int, int> > pairvec,   std::vector <int> *mainChain, int additional_value)
{
    size_t Jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765};
    int jacobsthal_idx = 1;

    std::vector<int>::iterator slice_delim_it;
    std::vector<std::pair <int, int> >::iterator pair_it;
    std::vector<std::pair <int, int> >::iterator last_jacob_it = pairvec.begin();

    while (Jacobsthal[jacobsthal_idx] <= pairvec.size())
    {
        pair_it = pairvec.begin();
        std::advance(pair_it, Jacobsthal[jacobsthal_idx] - 1);
        last_jacob_it = pair_it;

         int insertion_counter = 0;
         while (Jacobsthal[jacobsthal_idx] - insertion_counter > Jacobsthal[jacobsthal_idx - 1])
         {
             slice_delim_it = std::find(mainChain->begin(), mainChain->end(), pair_it ->second);
             binary_search_insertion(mainChain, slice_delim_it, pair_it->first);
             pair_it--;
             insertion_counter++;
         }
         jacobsthal_idx++;
    }
    if (Jacobsthal[jacobsthal_idx] != pairvec.size())
    {
        pair_it = pairvec.end();
        if (pair_it != pairvec.begin())
            pair_it--;
        while (pair_it != last_jacob_it)
        {
            slice_delim_it = std::find(mainChain->begin(), mainChain->end(),pair_it->second);
            binary_search_insertion(mainChain,slice_delim_it, pair_it->first);
            pair_it--;
        }
    }

    if (additional_value != -1)
        binary_search_insertion(mainChain,mainChain->end(), additional_value);
}

void insert_into_mainChainlst(std::list<std::pair<int, int> > pairlst, std::list <int> *mainChain, int additional_value)
{
    size_t Jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765};
    int jacobsthal_idx = 1;

    std::list<int>::iterator slice_delim_it;
    std::list<std::pair <int, int> >::iterator pair_it;
    std::list<std::pair <int, int> >::iterator last_jacob_it = pairlst.begin();

    while (Jacobsthal[jacobsthal_idx] <= pairlst.size())
    {
        pair_it = pairlst.begin();
        std::advance(pair_it, Jacobsthal[jacobsthal_idx] - 1);
        last_jacob_it = pair_it;

        int insertion_counter = 0;
        while (Jacobsthal[jacobsthal_idx] - insertion_counter > Jacobsthal[jacobsthal_idx - 1])
        {
            slice_delim_it = std::find(mainChain->begin(), mainChain->end(), pair_it ->second);
            binary_search_insertionlst(mainChain, slice_delim_it, pair_it->first);
            pair_it--;
            insertion_counter++;
        }
        jacobsthal_idx++;
    }
    if (Jacobsthal[jacobsthal_idx] != pairlst.size())
    {
        pair_it = pairlst.end();
        if (pair_it != pairlst.begin())
            pair_it--;
        while (pair_it != last_jacob_it)
        {
            slice_delim_it = std::find(mainChain->begin(), mainChain->end(),pair_it->second);
            binary_search_insertionlst(mainChain,slice_delim_it, pair_it->first);
            pair_it--;
        }
    }

    if (additional_value != -1)
        binary_search_insertionlst(mainChain,mainChain->end(), additional_value);
}

void fja_vector(char **argv)
{
    std::vector<int> vec;
    int              straggler = -1;
    clock_t start = clock();
    std::vector<std::pair<int,int> > pairvec;
    size_t i = 1;
    std::cout << "Before:   ";
    for (size_t j = 1; argv[j]; j++)
        std::cout << argv[j] << " ";
    std::cout << std::endl;
    while(argv[i])
    {
        if (argv[i] && argv[i + 1])
        {
            pairvec.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i + 1])));
            i += 2;
        }
        else
        {
            straggler = std::atoi(argv[i]);
            i++;
        }
    }

    swapbysize(pairvec);
    mergeSort(pairvec.begin(), pairvec.end(), 0);

    // Creates two lists and starts inserting in them
    std::vector <int> mainChain;

    for(size_t i = 0; i < pairvec.size(); i++)
        mainChain.push_back(pairvec[i].second);
    if (!pairvec.empty())
        mainChain.insert(mainChain.begin(), pairvec.begin()->first);

    insert_into_mainChain(pairvec, &mainChain, straggler);

    std::cout << "After:    ";
    for ( std::vector<int>::iterator it2 = mainChain.begin(); it2 != mainChain.end(); ++it2) {
        std::cout << *it2 << " ";
    }
    std::cout << std::endl;

    clock_t end = clock();
    std::cout << "Time to process a range of " << mainChain.size() << " elements with std::vector: " << static_cast<double>(end - start) / 1000 << " millisec" << std::endl;
}

void fja_list(char **argv)
{
    int              straggler = -1;
    clock_t start = clock();
    std::list<std::pair<int,int> > pairlst;
    size_t i = 1;
    while(argv[i])
    {
        if (argv[i] && argv[i + 1])
        {
            pairlst.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i + 1])));
            i += 2;
        }
        else
        {
            straggler = std::atoi(argv[i]);
            i++;
        }
    }

    swapbysizelst(pairlst);
    mergeSortlst(pairlst.begin(), pairlst.end(), 0);

    // Creates two lists and starts inserting in them
    std::list <int> mainChain;

    for(std::list<std::pair<int, int> >::iterator it = pairlst.begin(); it != pairlst.end(); ++it)
        mainChain.push_back(it->second);
    if (!pairlst.empty())
        mainChain.insert(mainChain.begin(), pairlst.begin()->first);


    insert_into_mainChainlst(pairlst, &mainChain, straggler);

    clock_t end = clock();
    std::cout << "Time to process a range of " << mainChain.size() << " elements with std::list:   " << static_cast<double>(end - start) / 1000 << " millisec" << std::endl;
}

int main (int argc, char **argv)
{
    if (argc == 1 || !allArgumentsDigits(argc, argv))
    {
        std::cout << "Error, please enter positive integers to sort." << std::endl;
        return 1;
    }

    fja_vector(argv);
    fja_list(argv);
}
