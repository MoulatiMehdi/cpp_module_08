#include "easyfind.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#include <ostream>
#include <vector>

void fillVector(std::vector<int> &vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        vec.push_back(std::rand() % 100);
    }
}

std::ostream &operator<<(std::ostream &out, const std::vector<int> &vec)
{
    std::cout << "\tSet : {";
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i];
        if (i != vec.size() - 1)
            std::cout << ", ";
    }
    std::cout << "}\n";
    return out;
}

int main()
{
    srand(time(0));

    const int        target = 5;
    std::vector<int> v;

    fillVector(v, 10);
    std::cout << v << std::endl;

    std::cout << "is " << target << " in the Set ? ";
    try
    {
        easyfind(v, target);
        std::cout << "Yes" << std::endl;
    }
    catch (...)
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
