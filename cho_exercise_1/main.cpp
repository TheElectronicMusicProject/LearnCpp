/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "O.2 - Bitwise operators"
 * Question #2
 */

#include <iostream>
#include <bitset>

/**
 * @brief   Rotate left
 * @param[in]   bits    4-bit variable
 * @return  The variabile rotated in bits
 */
static std::bitset<4>
rotl (std::bitset<4> bits)
{
    if (bits.test(3))
    {
        bits <<= 1;
        bits.set(0);
    }
    else
    {
        bits <<= 1;
    }

    return bits;
}   /* rotl() */

int
main ()
{
    std::bitset<4> bits1{0b0001};
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2{0b1001};
    std::cout << rotl(bits2) << '\n';

    return 0;
}   /* main() */


/*** End of file ***/
