#include <iostream>
#include "get_int.h"

int
get_integer ()
{
    std::cout << "Enter an integer: ";
    
    int num{};
    std::cin >> num;

    return num;
}   /* get_integer() */


/*** End of file ***/
