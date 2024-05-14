/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.9 - Introduction to std::string"
 */

#include <iostream>
#include <string>

int
main ()
{
    std::cout << "Enter your full name: ";
    std::string name{};

    // - getline() is better to read a string
    // - ws is an input manipulator which tells cin to ignore any leading
    // whitespace before extraction
    //
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color);

    std::cout << "Your name is " << name << " and your favorite color is "
              << color << '\n';

    // The string terminator is omitted
    //
    int len{static_cast<int>(name.length())};
    std::cout << "Your name has " << len << " characters\n";

    // Ok "using namespace" inside functions
    //
    using namespace std::string_literals;
    std::cout << "This is a C-style string literal\n";
    std::cout << "This is a std::string literal\n"s;

#if 0
    // Compiler error: this is not supported in C++17, it is best using the
    // std::string_view
    //
    constexpr std::string new_name{"Alex"s};
    std::cout << "New name is " << new_name << '\n';
#endif

    return (0);
}   /* main() */


/*** End of file ***/
