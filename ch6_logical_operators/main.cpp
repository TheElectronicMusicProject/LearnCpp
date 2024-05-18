/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "6.7 - Logical operators"
 */

#include <iostream>

int
main ()
{
    constexpr bool var_a {true};
    constexpr bool var_b {false};
    constexpr bool var_c {true};

    std::cout << std::boolalpha;

    // Parenthesis around the expression are needed because it will generate
    // warnings otherwise
    //
    std::cout << "!a && (b || c) = " << (!var_a && (var_b || var_c)) << '\n';
    std::cout << "not a and (b or c) = " << (not var_a and (var_b or var_c))
              << '\n';

    return 0;
}   /* main() */