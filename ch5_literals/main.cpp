/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.2 - Literals"
 */

#include <iostream>

int
main ()
{
    // 5 is int by default
    //
    std::cout << 5 << '\n';

    // Integral long (l or L)
    //
    std::cout << 5L << '\n';

    // Integral unsigned int (u or U)
    //
    std::cout << 5U << '\n';

    // Integral unsigned long (ul, uL, Ul, UL, lu, lU, Lu, LU)
    //
    std::cout << 5UL << '\n';

    // Integral long long (ll or LL)
    //
    std::cout << 5LL << '\n';

    // Integral unsigned long long (ull, uLL, Ull, ULL, llu, llU, LLu, LLU)
    //
    std::cout << 5ULL << '\n';
#if 0
    // Integral signed version of std::size_t (z or Z) - from C++23
    //
    std::cout << 5Z << '\n';

    // Integral std::size_t (uz, uZ, Uz, UZ, zu, zU, Zu, ZU) - from C++23
    //
    std::cout << 5UZ << '\n';
#endif

    // 5.0 (no suffix) is double by default
    //
    std::cout << 5.0 << '\n';

    // Floating point float (f or F)
    //
    std::cout << 5.0F << '\n';

    // Floating point long double (l or L)
    //
    std::cout << 5.0L << '\n';
    
    return (0);
}   /* main() */


/*** End of file ***/
