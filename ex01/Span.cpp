/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 10:58:26 by mmoulati          #+#    #+#             */
/*   Updated: 2026/01/11 11:49:32 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span() : _data()
{
}

Span::Span(u_int n) : _data()
{
    _data.reserve(n);
}

Span::Span(const Span &other) : _data(other._data)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;
    _data = other._data;
    return *this;
}

void Span::addNumber(int num)
{
    if (_data.size() >= _data.capacity())
        throw std::length_error("Span capacity exceeded");
    _data.push_back(num);
}

Span::u_int Span::longestSpan() const
{
    if (_data.size() < 2)
        throw std::logic_error("Span size must be at least 2 elements");

    long a = *std::max_element(_data.begin(), _data.end());
    long b = *std::min_element(_data.begin(), _data.end());
    return a - b;
}

Span::u_int Span::shortestSpan() const
{
    if (_data.size() < 2)
        throw std::logic_error("Span size must be at least 2 elements");

    long min;
    long diff;
    _Tp  b(_data);

    std::sort(b.begin(), b.end());
    min = static_cast<long>(b[1]) - static_cast<long>(b[0]);

    for (u_int i = 0; i < _data.size() - 1; i++)
    {
        diff = static_cast<long>(b[i + 1]) - static_cast<long>(b[i]);
        if (diff < min)
            min = diff;
    }
    return min;
}
