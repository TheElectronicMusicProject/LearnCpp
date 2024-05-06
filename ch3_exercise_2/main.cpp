/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "3.x - Chapter 3 summary and quiz"
 * Question #2
 */

#include <iostream>

#define DEBUG_CORRECTION

int
read_number ()
{
    std::cout << "Please enter a number: ";
    int var_x{};
    std::cin >> var_x;

    return var_x;
}   /* read_number() */

void
write_answer (int var_x)
{
    std::cout << "The quotient is: " << var_x << '\n';
}   /* write_answer() */

int
main ()
{
    int num_x{};
    int num_y{};

    num_x = read_number();
#ifndef DEBUG_CORRECTION
    num_x = read_number();
#else
    num_y = read_number();
#endif /* DEBUG_CORRECTION */

    write_answer(num_x / num_y);

    return (0);
}   /* main() */


/*** End of file ***/
