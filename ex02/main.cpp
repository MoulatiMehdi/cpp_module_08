#include "MutantStack.hpp"
#include <deque>
#include <iomanip>
#include <iostream>
#include <iterator>

int main()
{
    MutantStack<int> a;

    std::deque<int> c;
    MutantStack<int> b(c);



    for (int i = 0; i < 10; i++)
    {
        a.push(i * 2);
    }

    {
        MutantStack<int>::iterator it = a.begin();
        while (it != a.end())
        {
            *it /= 2;
            it++;
        }
    }
    {
        MutantStack<int>::const_iterator it = a.begin();
        while (it != a.end())
        {
            std::cout << std::setw(2) << *it << " ";
            it++;
        }
        std::cout << std::endl;
    }
    {
        MutantStack<int>::reverse_iterator it = a.rbegin();
        while (it != a.rend())
        {
            *it *= 4;
            it++;
        }
    }
    {
        MutantStack<int>::const_reverse_iterator it = a.rbegin();
        while (it != a.rend())
        {
            std::cout << std::setw(2) << *it << " ";
            it++;
        }
        std::cout << std::endl;
    }
    return 0;
}
