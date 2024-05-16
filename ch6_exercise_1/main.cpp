/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "6.3 — Remainder and Exponentiation"
 *          Question #1.
 */

#include <iostream>
#include <string_view>

static constexpr bool
is_even (int num)
{
    return (0 == (num % 2));
}   /* is_even() */

static constexpr std::string_view
print_even (bool b_is_even)
{
    return ((true == b_is_even) ? "is even" : "is odd");
}   /* print_even */

int
main ()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    std::cout << input << " is " << print_even(is_even(input)) << '\n';

    return 0;
}   /* main() */