#ifndef MUTANT_STACK_TPP
#define MUTANT_STACK_TPP

#include <stack>
#ifndef MUTANT_STACK_HPP
    #error MutantStack.hpp is required
#endif

template <typename _Tp, typename _Sequence>
MutantStack<_Tp, _Sequence>::MutantStack() : std::stack<_Tp, _Sequence>()
{
}

template <typename _Tp, typename _Sequence>
MutantStack<_Tp, _Sequence>::MutantStack(const _Sequence &c)
    : std::stack<_Tp, _Sequence>(c)
{
}

template <typename _Tp, typename _Sequence>
MutantStack<_Tp, _Sequence>::MutantStack(const MutantStack &other)
    : std::stack<_Tp, _Sequence>(other.c)
{
}

template <typename _Tp, typename _Sequence>
MutantStack<_Tp, _Sequence>::~MutantStack<_Tp, _Sequence>()
{
}

template <typename _Tp, typename _Sequence>
MutantStack<_Tp, _Sequence> &
MutantStack<_Tp, _Sequence>::operator=(const MutantStack &other)
{
    if (other == this)
        return *this;
    this->c = other.c;
    return *this;
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::iterator
MutantStack<_Tp, _Sequence>::begin()
{
    return this->c.begin();
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::const_iterator
MutantStack<_Tp, _Sequence>::begin() const
{
    return this->c.begin();
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::reverse_iterator
MutantStack<_Tp, _Sequence>::rbegin()
{
    return this->c.rbegin();
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::const_reverse_iterator
MutantStack<_Tp, _Sequence>::rbegin() const
{
    return this->c.rbegin();
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::iterator
MutantStack<_Tp, _Sequence>::end()
{
    return this->c.end();
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::const_iterator
MutantStack<_Tp, _Sequence>::end() const
{
    return this->c.end();
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::reverse_iterator
MutantStack<_Tp, _Sequence>::rend()
{
    return this->c.rend();
}

template <typename _Tp, typename _Sequence>
typename MutantStack<_Tp, _Sequence>::const_reverse_iterator
MutantStack<_Tp, _Sequence>::rend() const
{
    return this->c.end();
}
#endif
