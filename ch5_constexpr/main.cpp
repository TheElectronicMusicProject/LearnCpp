/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.4 - Constexpr variables"
 */

#include <iostream>

#if 0
static int
five ()
{
    return 5;
}   /* five() */
#endif

int
main ()
{
    // Ensure a compile-time constant variable (must be initialized with a
    // constant expression)
    //
    constexpr double gravity{9.8};
    std::cout << gravity << '\n';

    constexpr int sum{4 + 5};
    std::cout << sum << '\n';

    constexpr int something{sum};
    std::cout << something << '\n';

#if 0
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    constexpr int my_age{age};
    std::cout << my_age << '\n';

    constexpr int var_f{five()};
    std::cout << var_f << '\n';
#endif

    return (0);
}   /* main() */


/*** End of file ***/
