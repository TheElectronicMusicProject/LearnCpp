/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "4.x - Chapter 4 summary and quiz"
 * Question #2
 */

#include <iostream>

int
main ()
{
    std::cout << "Enter a double value: ";
    double num_1{};

    if (!(std::cin >> num_1))
    {
        std::cerr << "Abort due to invalid input\n";
        return EXIT_FAILURE;
    }

    std::cout << "Enter a double value: ";
    double num_2{};
    
    if (!(std::cin >> num_2))
    {
        std::cerr << "Abort due to invalid input\n";
        return EXIT_FAILURE;
    }

    std::cout << "Enter +, -, * or /: ";
    char oper{};

    if (!(std::cin >> oper))
    {
        std::cerr << "Abort due to invalid operator\n";
        return EXIT_FAILURE;
    }
    else
    {
        switch (oper)
        {
            case '+':
                std::cout << num_1 << oper << num_2 << " is "
                          << num_1 + num_2 << '\n';
            break;

            case '-':
                std::cout << num_1 << oper << num_2 << " is "
                          << num_1 - num_2 << '\n';
            break;

            case '*':
                std::cout << num_1 << oper << num_2 << " is "
                          << num_1 * num_2 << '\n';
            break;

            case '/':
                std::cout << num_1 << oper << num_2 << " is "
                          << num_1 / num_2 << '\n';
            break;

            default:
                std::cout << "The operator " << oper << " is invalid\n";
            break;
        }
    }

    return EXIT_SUCCESS;
}   /* main() */


/*** End of file ***/
