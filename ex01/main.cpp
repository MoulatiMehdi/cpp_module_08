#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    srand(std::time(0));
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << std::string(50, '-') << std::endl;
    {
        std::vector<int> vec;
        Span             sp = Span(10000);

        for (int i = 0; i < 10000; i++)
        {
            vec.push_back(rand());
        }
        sp.addNumbers(vec.begin(), vec.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    return 0;
}
