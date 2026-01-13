#include <vector>

class Span
{
  private:
    typedef unsigned int     u_int;
    typedef std::vector<int> _Tp;

    _Tp _data;

  public:
    Span();
    Span(u_int n);
    Span(const Span &other);
    ~Span();

    Span &operator=(const Span &other);

    void addNumber(int n);

    template <typename T>
    void addNumbers(T begin, T end);

    u_int shortestSpan() const;
    u_int longestSpan() const;
};

template <typename T>
void Span::addNumbers(T begin, T end)
{
    while (begin != end)
    {
        addNumber(*begin);
        ++begin;
    }
}
