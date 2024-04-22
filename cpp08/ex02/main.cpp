//
// Created by fvon-nag on 18.03.24.
//
#include "MutantStack.h"
#include <iostream>
#include <list>
#include <vector>
#include <queue>

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

std::cout << std::endl;
  std::list<int> mstackl; // Renamed mstack to mstackl

    mstackl.push_back(5);
    mstackl.push_back(17);
    std::cout << mstackl.back() << std::endl;
    mstackl.pop_back();
    std::cout << mstackl.size() << std::endl;

    mstackl.push_back(3);
    mstackl.push_back(5);
    mstackl.push_back(737);
    //[...]
    mstackl.push_back(0);

    std::list<int>::iterator it2 = mstackl.begin();
    std::list<int>::iterator ite2 = mstackl.end();
    ++it2;
    --it2;
    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::stack<int, std::list<int> > s2(mstackl);
std::cout << std::endl;

// Test for std::deque
std::deque<int> mdeque;

mdeque.push_back(5);
mdeque.push_back(17);
std::cout << mdeque.back() << std::endl; // prints 17
mdeque.pop_back(); // pops the last element (17)
std::cout << mdeque.size() << std::endl; // prints 1

mdeque.push_back(3);
mdeque.push_back(5);
mdeque.push_back(737);
//[...]
mdeque.push_back(0);

while (!mdeque.empty()) {
    std::cout << mdeque.front() << std::endl;
    mdeque.pop_front();
}

std::cout << std::endl;

return 0;
}