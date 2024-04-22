#include "Span.h"

int main(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    Span S = Span(10);

    S.addNumber(1);
    S.addNumber(5);
    S.addNumber(0);
    std::cout << "shortest:" << S.shortestSpan() << std::endl;
    std::cout << "longest:" << S.longestSpan() << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::vector<int> vec;
    vec.push_back(6);
    vec.push_back(3);
    vec.push_back(17);
    vec.push_back(9);
    vec.push_back(11);
    Span sp2 = Span(5);
    sp2.addRange(vec.begin(), vec.end());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    try {
        sp.addNumber(2);
    } catch(SpanFullException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;

        std::vector<int> vec2;
        Span sp3 = Span(20000);
        for(size_t i = 0 ; i < 20000; i++)
            vec2.push_back(rand());
        sp3.addRange(vec2.begin(), vec2.end());
        std::cout << "shortest:" << sp3.shortestSpan() << std::endl;
        std::cout << "longest:" << sp3.longestSpan() << std::endl;
    }


}