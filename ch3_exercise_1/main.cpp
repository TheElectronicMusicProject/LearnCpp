/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "3.x - Chapter 3 summary and quiz"
 * Question #1
 */

#include <iostream>

#define DEBUG_CORRECTION

#ifndef DEBUG_CORRECTION
int
read_number (int var_x)
{
#else
int
read_number ()
{
    int var_x{};
#endif /* DEBUG_CORRECTION */

    std::cout << "Please enter a number: ";
    std::cin >> var_x;

    return var_x;
}   /* read_number() */

void
write_answer (int var_x)
{
    std::cout << "The sum is: " << var_x << '\n';
}   /* write_answer() */

int
main ()
{
    int num{};

#ifndef DEBUG_CORRECTION
    read_number(num);
    num = num + read_number(num);
#else
    num = read_number();
    num = num + read_number();
#endif /* DEBUG_CORRECTION */
    write_answer(num);

    return (0);
}   /* main() */


/*** End of file ***/
