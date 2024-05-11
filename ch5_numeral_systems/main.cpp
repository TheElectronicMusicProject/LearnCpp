/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.3 - Numeral systems (decimal, binary, hexadecimal, and
 *          octal)"
 */

#include <iostream>
#include <bitset>

#if 0
#   include <format>    /* From C++20 */
#   include <print>     /* From C++23 */
#endif

int
main ()
{
    int val_oct{012};
    std::bitset<4> bin_oct{012};    /* Store 4 bits for the variable */
    std::cout << "val_oct is"
              << "\n\tdecimal " << std::dec << val_oct
              << "\n\toctal " << std::oct << val_oct
              << "\n\thexadecimal " << std::hex << val_oct
              << "\n\tbinary " << bin_oct
              << '\n';

    int val_hex{0xF};
    std::bitset<4> bin_hex{0xF};    /* Store 4 bits */
    std::cout << "val_hex is "
              << "\n\tdecimal " << std::dec << val_hex
              << "\n\toctal " << std::oct << val_hex
              << "\n\thexadecimal " << std::hex << val_hex
              << "\n\tbinary " << bin_hex
              << '\n';

    // From C++14 there are binary literals + digit separators
    //
    int val_bin{0b1011'0010'1100};
    std::bitset<12> bin_bin{0b1011'0010'1100};   /* Store 12 bits */
    std::cout << "val_bin is "
              << "\n\tdecimal " << std::dec << val_bin
              << "\n\toctal " << std::oct << val_bin
              << "\n\thexadecimal " << std::hex << val_bin
              << "\n\tbinary " << bin_bin
              << '\n';

#if 0
    // From C++20 there is a newer option to print binary values
    //
    std::cout << std::format("{:b}\n" 0b1010);      /* C++20 - prints 1010 */
    std::cout << std::format("{:#b}\n" 0b1010);     /* C++20 - prints 0b1010 */

    std::println("{:b} {:#b}\n", 0b1010, 0b1010);   /* C++23 */
#endif

    return (0);
}   /* main() */


/*** End of file ***/
