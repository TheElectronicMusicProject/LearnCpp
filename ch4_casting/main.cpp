/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "4.12 - Introduction to type conversion and static_cast"
 */

#include <iomanip>
#include <iostream>

static void
print (int val)
{
    std::cout << val << '\n';
}   /* print() */

int
main ()
{
    // This is possible
    //
    print(static_cast<int>(5.5));

#if 0
    // This will produce a warning
    //
    print(5.5);
#endif

    // Print a char with its numeric value
    //
    char chr{97};
    std::cout << "char is " << chr << ", that is "
              << static_cast<int>(chr) << '\n';

    // This is ok, but undefined behaviour will result in casting a value which
    // is out of range of the new type
    //
    unsigned int val_u{5};
    int val_s{static_cast<int>(val_u)};
    std::cout << "val_s is " << val_s << '\n';

    // Behaviour of int8_t: it is like using "signed char" (it is not
    // guaranteed)
    //
    std::int8_t my_int{65};
    std::cout << "my_int is " << my_int << '\n';
    std::cout << "my_int with casting is " << static_cast<int>(my_int) << '\n';

    // If int8_t is trated as a char, there are problems: the input routine
    // treats the input as sequence of characters, so 35 is '3', '5'. Then the
    // fist character is extracted and converted to the ASCII code 51
    //
    std::cout << "Enter a number between 0 and 127: ";
    std::int8_t my_new_int{};
    std::cin >> my_new_int;
    std::cout << "You entered: " << static_cast<int>(my_new_int) << '\n'; 

    return (0);
}   /* main() */


/*** End of file ***/
