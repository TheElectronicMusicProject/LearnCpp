/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "4.9 - Boolean values"
 */

#include <iomanip>
#include <iostream>

int
main ()
{
    std::cout << std::boolalpha;
    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::noboolalpha;
    std::cout << true << '\n';
    std::cout << false << '\n';

    // Uniform initialization doesn't accept integer literals
    //
#if 0
    bool b_no{4};
    std::cout << b_no << '\n';
#endif

    // But copy initialization allows implicit conversion (warning ?)
    //
    bool b_yes = 4;
    std::cout << b_yes << '\n';

    // An input like 0 or 1 is ok, but true or false generates a failure
    //
    bool b_num{};
    std::cout << "Enter a boolean value: ";
    
    if (!(std::cin >> b_num))
    {
        std::cerr << "Error reading first value" << std::endl;
        return EXIT_FAILURE;
    }
    else
    {
        std::cout << "You entered : " << b_num << '\n';
    }

    // But in this case is possible to use true and false, but 0 and 1 cannot
    // be used
    //
    std::cout << "Enter a boolean value: ";
    std::cin >> std::boolalpha;
    
    if (!(std::cin >> b_num))
    {
        std::cerr << "Error reading first value" << std::endl;
        return EXIT_FAILURE;
    }
    else
    {
        std::cout << "You entered : " << b_num << '\n';
    }

    return EXIT_SUCCESS;
}   /* main() */


/*** End of file ***/
