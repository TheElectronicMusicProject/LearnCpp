/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.x - Chapter 5 summary and quiz"
 *          Question #2.
 */

#include <cstdint>
#include <iostream>

#define CORRECTION

int
main ()
{
    std::cout << "How old are you?\n";

    // Error! Using uint8_t makes the cin take a char letter instead a integer
    // number (in ASCII code)
    //
#ifdef CORRECTION
    int age{};
#else
    std::uint8_t age{};
#endif /* CORRECTION */
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas: ";

    // Error! Avoid the use of magic numbers
    //
#ifdef CORRECTION
    constexpr int min_age{16};

    if (age >= min_age)
#else
    if (age >= 16)
#endif /* CORRECTION */
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    // Error! Do not use multi-character constant
    //
#ifdef CORRECTION
    std::cout << ".\n";
#else
    std::cout << '.\n';
#endif /* CORRECTION */

    return (0);
}   /* main() */


/*** End of file ***/
