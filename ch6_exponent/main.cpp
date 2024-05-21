/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "6.3 — Remainder and Exponentiation"
 */

#include <iostream>
#include <cassert>
#include <cstdint>
#include <limits>

/**
 * @brief   Integer exponentiation
 * The exponentiation by squaring is used.
 * @param[in]   base    The base of the exponent.
 * @param[in]   exp     The exponent.
 * @return  The integer exponentiation.
 * 
 * @note    exp must be positive.
 * @note    There isn't range/overflow checking.
 */
static constexpr std::int64_t
powint (std::int64_t base, int exp)
{
    assert((exp >= 0) && ("powint: exp parameter has negative value"));

    // 0^0 returns 1, 0 otherwise
    //
    if (0 == base)
    {
        return (0 == exp) ? 1 : 0;
    }

    std::int64_t result{1};

    while (exp > 0)
    {
        // Compute powint(x, n), with n > 0:
        // Odd case with exp > 2: x * powint(x^2, (n - 1) / 2)
        // Even case with exp > 0: powint(x^2, n / 2)
        //
        if (1 & exp)
        {
            result *= base;
        }

        exp /= 2;
        base *= base;
    }

    return result;
}   /* powint() */

/**
 * @brief   Integer exponentiation
 * The exponentiation by squaring is used.
 * @param[in]   base    The base of the exponent.
 * @param[in]   exp     The exponent.
 * @return  The integer exponentiation or
 *          std::numeric_limits<std::int64_t>::max() if overflow occurs.
 * 
 * @note    exp must be positive.
 * @note    Safer but slower version which checks for overflow.
 */
static constexpr std::int64_t
powint_safe (std::int64_t base, int exp)
{
    assert((exp >= 0) && ("powint: exp parameter has negative value"));

    // 0^0 returns 1, 0 otherwise
    //
    if (0 == base)
    {
        return (0 == exp) ? 1 : 0;
    }

    std::int64_t result{1};

    // For easier range check, the base is always positive
    //
    bool negative_result{false};

    if (base < 0)
    {
        base = -base;
        negative_result = (exp & 1);
    }

    while (exp > 0)
    {
        // Compute powint(x, n), with n > 0:
        // Odd case with exp > 2: x * powint_safe(x^2, (n - 1) / 2)
        // Even case with exp > 0: powint_safe(x^2, n / 2)
        //
        if (1 & exp)
        {
            if (result > (std::numeric_limits<std::int64_t>::max() / base))
            {
                std::cerr << "powerint_safe(): result overflowed\n";

                return std::numeric_limits<std::int64_t>::max();
            }

            result *= base;
        }

        exp /= 2;

        if (exp <= 0)
        {
            break;
        }

        if (base > (std::numeric_limits<std::int64_t>::max() / base))
        {
            std::cerr << "powerint_safe(): base overflowed\n";

            return std::numeric_limits<std::int64_t>::max();
        }

        base *= base;
    }

    if (0 != negative_result)
    {
        return -result;
    }

    return result;
}   /* powint_safe() */

int
main ()
{
    std::cout << "7^12 is " << powint(7, 12) << '\n';
    std::cout << "7^13 is " << powint_safe(7, 13) << '\n';

    return 0;
}   /* main() */


/*** End of file ***/
