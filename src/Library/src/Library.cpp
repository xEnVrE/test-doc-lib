#include <Library/Library.h>

Library::Library(const int& parameter) :
    parameter_(parameter)
{

}


Library::~Library()
{}


bool Library::foo(const int& parameter)
{
    if (parameter == 0)
        return true;

    return false;
}
