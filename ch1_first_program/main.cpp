#include <iostream>

int
main ()
{
    int value{};

    std::cout << "Enter an integer: ";

    std::cin >> value;

    std::cout << "Double " << value << " is " << value * 2 << std::endl;
    std::cout << "Triple " << value << " is " << value * 3 << std::endl;

    return (0);
}   /* main() */


/*** End of file ***/
