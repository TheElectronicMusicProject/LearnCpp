/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.9 - Introduction to std::string"
 *          Question #1.
 */

#include <iostream>
#include <string>

static int
get_age ()
{
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    return age;
}   /* get_age() */

// This is not a good idea returning a std::string by value
//
static std::string
get_full_name ()
{
    std::cout << "Enter your full name: ";
    std::string full_name{};
    getline(std::cin >> std::ws, full_name);
    
    return full_name;
}   /* get_full_name() */

int
main ()
{
    std::string your_name{get_full_name()};
    int your_age{get_age()};
    int your_name_len{static_cast<int>(your_name.length())};

    std::cout << "Your age + length of name is: "
              << your_age + your_name_len << '\n';

    return (0);
}   /* main() */


/*** End of file ***/
