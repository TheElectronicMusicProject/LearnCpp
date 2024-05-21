/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "6.7 - Logical operators"
 * Question #2
 */

#include <iostream>

static bool
is_even (int val)
{
    return (!(val % 2));
}   /* is_even() */

int
main ()
{
    std::cout << "Enter an integer: ";
    int var{};
    std::cin >> var;

    if (is_even(var))
    {
        std::cout << var << " is even\n";
    }
    else
    {
        std::cout << var << " is odd\n";
    }

    return 0;
}   /* main() */


/*** End of file ***/
