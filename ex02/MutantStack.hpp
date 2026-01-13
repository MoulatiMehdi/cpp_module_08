#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <deque>
#include <stack>

template <typename _Tp, typename _Sequence = std::deque<_Tp> >
class MutantStack : public std::stack<_Tp, _Sequence>
{
  public:
    typedef typename _Sequence::iterator               iterator;
    typedef typename _Sequence::reverse_iterator       reverse_iterator;
    typedef typename _Sequence::const_iterator         const_iterator;
    typedef typename _Sequence::const_reverse_iterator const_reverse_iterator;

    MutantStack();
    MutantStack(const _Sequence &c);
    MutantStack(const MutantStack &other);
    ~MutantStack();
    MutantStack &operator=(const MutantStack &other);

    iterator       begin();
    const_iterator begin() const;

    reverse_iterator       rbegin();
    const_reverse_iterator rbegin() const;

    iterator       end();
    const_iterator end() const;

    reverse_iterator       rend();
    const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"
#endif
