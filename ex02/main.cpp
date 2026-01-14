#include "MutantStack.hpp"
#include <deque>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>

int main()
{
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
        MutantStack<int>::iterator it  = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << std::string(50,'-') << std::endl;
    {

        MutantStack<int> a;

        std::deque<int> c;

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
    }
    return 0;
}
