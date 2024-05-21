/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "6.6 — Relational operators and floating point comparisons"
 */

#include <iostream>
#include <algorithm>

// Prior to C++23 we can't make approximately_equal_abs(),
// approximately_equal_rel() and approximately_equal_abs_rel() returning a
// constexpr, because std::abs wasn't constexpr
// So const_abs() will be used instead of abs()
//
template <typename T>
constexpr T const_abs (T val)
{
    return ((val < 0) ? -val : val);
}   /* const_abs() */

// Bad way to use this function, because abs_epsilon doesn't take care of the
// input's order of magnitude:
// - 1 and 1.0001 would be different
// - 0.0000001 and 0.00001 would be the same
// - 10000 and 10000.0001 would be different
//
static bool
approximately_equal_abs (double num_a,
                         double num_b,
                         double abs_epsilon)
{
    // If the distance between the two numbers is less than or equal to
    // abs_epsilon, then they are close enough.
    //
    return (const_abs(num_a - num_b) <= abs_epsilon);
}   /* approximately_equal_abs() */


// In this case rel_epsilon is a percentage
//
static constexpr bool
approximately_equal_rel (double num_a,
                         double num_b,
                         double rel_epsilon)
{
    // If the distance between the two numbers is within epsilon percent of the
    // larger of num_a and num_b
    //
    return (const_abs(num_a - num_b) <=
            (std::max(const_abs(num_a), const_abs(num_b)) * rel_epsilon));
}   /* approximately_equal_rel() */

// Mixed approach: abs_epsilon should be very small
//
static constexpr bool
approximately_equal_abs_rel (double num_a,
                             double num_b,
                             double abs_epsilon,
                             double rel_epsilon)
{
    // For numbers near zero in difference
    //
    if (const_abs(num_a - num_b) <= abs_epsilon)
    {
        return true;
    }

    return approximately_equal_rel(num_a, num_b, rel_epsilon);
}   /* approximately_equal_abs_rel() */


int
main ()
{
    std::cout << std::boolalpha;

    // ABSOLUTE
    //
    std::cout << "7.0000001 = 7.0000002? "
              << approximately_equal_abs(7.00001, 7.00002, 0.00001) << '\n';

    std::cout << "7.0000001 = 7.0000002? "
              << approximately_equal_rel(7.00001, 7.00002, 0.00001) << '\n';

    // RELATIVE
    //
    constexpr double var{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1
                         + 0.1};

    // Good values for general cases
    //
    constexpr double rel_eps{1e-8};
    constexpr double abs_eps{1e-12};

    // First, let's compare a (almost 1.0) to 1.0
    //
    std::cout << approximately_equal_rel(var, 1.0, rel_eps) << '\n';

    // Second, let's compare var - 1.0 (almost 0.0) to 0.0
    //
    std::cout << approximately_equal_rel(var - 1.0, 0.0, rel_eps) << '\n';

    // MIXED
    //
    std::cout << approximately_equal_abs_rel(var, 1.0, abs_eps, rel_eps)
              << '\n';

    std::cout << approximately_equal_abs_rel(var - 1.0, 0.0, abs_eps, rel_eps)
              << '\n';

    return 0;
}   /* main() */


/*** End of file ***/
