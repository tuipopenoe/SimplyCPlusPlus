// Tui Popenoe
// Exceptions.cpp
#include <exception>

using namespace std;

class DivideByZeroException : public exception{
    public:
        DivideByZeroException::DivideByZeroException() :
            exception("Attempt to divide by zero"){}
};