/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.7 - Inline functions and variables"
 */

// This will include a copy of pi() here
//
#include "pi.h"
#include <iostream>

double circumference(double radius);

int
main ()
{
    std::cout << pi() << '\n';
    std::cout << circumference(2.0) << '\n';

    return (0);
}   /* main() */


/*** End of file ***/
