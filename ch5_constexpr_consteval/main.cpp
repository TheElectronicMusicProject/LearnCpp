/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.8 - Constexpr and consteval functions"
 */

#include <iostream>

// constexpr functions are implicitly inline, so the compiler must see the full
// definition, so it can be put inside header files.
//
constexpr int
greater (int var_x, int var_y)
{
    return ((var_x > var_y) ? var_x : var_y);
}   /* greater() */

#if 0
// consteval from C++20 are functions which must be evaluated at compile time to
// produce a constant (while constexpr may be evaluated at compile-time o
// runtime)
//
consteval int
goo (int var_c)
{
    return var_c;
}   /* goo() */

// Compile error: constexpr variable requires constant expression initializer
// Compile error: consteval function call requires constant expression argument
//
constexpr int
foo (int var_b)
{
    // var_b is not a constexpr and cannot be used as a constexpr initializer or
    // in a call to a consteval function
    //
    constexpr int var_b2{var_b};

    return goo(var_b2);
}   /* foo() */
#endif

int
main ()
{
    // Evaluated at compile-time
    //
    constexpr int num_cx{5};
    constexpr int num_cy{6};
    constexpr int num_cz{greater(num_cx, num_cy)};

    std::cout << num_cz << " is greater!\n";
    

    // Evaluated at runtime (works also with functions returning constexpr)
    //
    int num_x{5};
    int num_y{6};

    std::cout << greater(num_x, num_y) << " is greater!\n";

    return (0);
}   /* main() */


/*** End of file ***/
