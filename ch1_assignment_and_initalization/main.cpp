#include <iostream>

int
main ()
{
    // No initializer (default initialization)
    //
    int var_a;

    std::cout << var_a << std::endl;

    // Initial value after equals sign (copy initialization)
    //
    int var_b = 5;

    std::cout << var_b << std::endl;

    // Initial value in parenthesis (direct initialization)
    //
    int var_c(6);

    std::cout << var_c << std::endl;

    // Initial value in braces (direct list initialization) - C++11
    //
    int var_d{7};

    std::cout << var_d << std::endl;

    // Initial value in braces after equals sign (copy list initialization) -
    // C++11
    //
    int var_e = {8};

    std::cout << var_e << std::endl;

    // Initializer is empty braces (value initialization) - C++11
    // Preferred when it is a temporary value which will be replaced
    //
    int var_f{};

    std::cout << var_f << std::endl;

    // This generates a compiler error, because a number with a fractional value
    // can't fit into an integer
    //
#if 0
    int var_g{4.5};

    std::cout << var_g << std::endl;
#endif

    // Avoid unused variable warnings
    //
    [[maybe_unused]] double pi{3.14159};
    [[maybe_unused]] double gravity{9.81};
    [[maybe_unused]] double phi{1.61803};

    return (0);
}   /* main() */


/*** End of file ***/
