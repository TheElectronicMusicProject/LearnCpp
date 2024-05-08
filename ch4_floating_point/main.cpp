/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "4.8 - Floating point numbers"
 */

#include <iomanip>
#include <iostream>

int
main ()
{
    // Tests with floating point numbers (with 6 digits of precision)
    //
    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    // Loss of precision
    //
    std::cout << std::setprecision(17);
    std::cout << 3.333333333333333333333333333f << '\n';
    std::cout << 3.333333333333333333333333333 << '\n';

    // Float has typically 7 digits of precision, also with non-fractional
    // numbers
    //
    float var_f{123456789.0f};
    std::cout << std::setprecision(9);
    std::cout << var_f << '\n';

    // Double is precise to 16 significant digits
    //
    double var_d{0.1};
    std::cout << var_d << '\n';
    std::cout << std::setprecision(17);
    std::cout << var_d << '\n';
    
    // These two numbers should be equal but the second one has rounding error
    //
    std::cout << std::setprecision(17);
    double var_d1{1.0};
    std::cout << var_d1 << '\n';
    double var_d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    std::cout << var_d2 << '\n';

    // Inf and NaN are returned only if the compiler uses the IEEE 754 format.
    //
    double zero{0.0};
    double posinf{5.0 / zero};
    std::cout << posinf << '\n';

    double neginf{-5.0 / zero};
    std::cout << neginf << '\n';

    double nan{zero / zero};
    std::cout << nan << '\n';

    return (0);
}   /* main() */


/*** End of file ***/
