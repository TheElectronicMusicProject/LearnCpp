/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "O.4 - Converting integers between binary and decimal
 *          representation"
 * Question #6
 */

#include <iostream>
#include <bitset>

int
main ()
{
    std::cout << "Insert a number between 0 and 255: ";
    int num{};
    std::cin >> num;

    int power{128};

    for (int idx{}; idx < 8; ++idx)
    {
        if (num >= power)
        {
            num -= power;
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        }

        power /= 2;
    }
    
    std::cout << '\n';

    return 0;
}   /* main() */


/*** End of file ***/
