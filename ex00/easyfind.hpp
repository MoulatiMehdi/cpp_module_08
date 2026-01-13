#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(T& a, int n)
{
    typename T::iterator it = std::find(a.begin(), a.end(), n);

    if (it == a.end())
        throw std::runtime_error("element not found");
    return n;
}
#endif
