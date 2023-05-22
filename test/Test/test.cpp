#include <Library/Library.h>

#include <iostream>


int main()
{
    std::cout << "Running test on the exported library." << std::endl;

    Library lib(0);

    if (!lib.foo(0))
    {
        std::cerr << "[Error] Library::foo(0) expected to be true, instead it is false." << std::endl;
        return EXIT_FAILURE;
    }

    if (lib.foo(1))
    {
        std::cerr << "[Error] Library::foo(!=0) expected to be false, instead it is true." << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
