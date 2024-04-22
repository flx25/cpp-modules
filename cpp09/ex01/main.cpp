//
// Created by fvon-nag on 02.04.24.
//
#include "RPN.h"

#include <stack>
#include <sstream>
#include <cstdlib>

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '/' || c == '*');
}

int performOperation(int a, int b, char op)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

int main (int argc, char ** argv)
{
    if (argc != 2)
    {
        std::cout << "Error" << std::endl;
        return (1);
    }

    std::stack<int> stk;
    std::istringstream iss(argv[1]);
    std::string token;

    while (std::getline(iss, token, ' '))
    {
        if (isOperator(token[0]) && stk.size() >= 2)
        {
            int b = stk.top(); stk.pop();
            int a = stk.top(); stk.pop();
            stk.push(performOperation(a, b, token[0]));
        }
        else
        {
            std::istringstream iss2(token);
            int num;
            iss2 >> num;
            stk.push(num);
        }
    }

    if (stk.size() != 1)
    {
        std::cout << "Error" << std::endl;
        return (1);
    }

    std::cout << stk.top() << std::endl;
    return 0;
}