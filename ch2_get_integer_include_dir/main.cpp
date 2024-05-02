/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "2.12 — Variable assignment and initialization"
 */

#include <iostream>
#include "get_int.h"

int
main ()
{
    int num_x{get_integer()};
    int num_y{get_integer()};

    std::cout << num_x << " + " << num_y << " is " << num_x + num_y << '\n';

    return (0);
}   /* main() */


/*** End of file ***/
