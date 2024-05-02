#include "io.h"
#include <iostream>

int
read_number ()
{
    int in_num{};
    std::cout << "Write first number: ";
    std::cin >> in_num;

    return in_num;
}   /* read_number() */

void
write_answer (int num)
{
    std::cout << "Answer: " << num << '\n';
}   /* write_answer() */


/*** End of file ***/
