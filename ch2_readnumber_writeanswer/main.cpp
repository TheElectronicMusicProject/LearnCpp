/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "2.x - Chapter 2 summary and quiz"
 */

#include "io.h"
#include <iostream>

int
main ()
{
    int num_1{read_number()};
    int num_2{read_number()};

    write_answer(num_1 + num_2);

    return (0);
}   /* main() */


/*** End of file ***/
