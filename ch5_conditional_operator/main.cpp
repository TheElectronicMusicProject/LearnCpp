/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.6 - The conditional operator"
 */

#include <iostream>

int
main ()
{
    // Both operands have matching type int
    //
    std::cout << "(true ? 1 : 2) is " << (true ? 1 : 2) << '\n';

    // Int value 1 converted to double
    //
    std::cout << "(false ? 1 : 2.2) is " << (false ? 1 : 2.2) << '\n';

    // -1 is converted to unsigned int, result out of range (warning)
    //
    std::cout << "(true ? -1 : 2u) is " << (true ? -1 : 2u) << '\n';

#if 0
    // Compiler error due to mismatching types
    //
    constexpr int var_x{5};
    std::cout << "((5 != var_x) ? var_x : \"x is 5\") is "
              << ((5 != var_x) ? var_x : "x is 5") << '\n';
#endif

    return (0);
}   /* main() */


/*** End of file ***/
