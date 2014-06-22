subl// Tui Popenoe
// Exceptions.cpp
#include <stdexcept>

using namespace std;

class DivideByZeroException : public runtime_error{
    public:
        DivideByZeroException() :
            runtime_error("Attempt to divide by zero"){}
};