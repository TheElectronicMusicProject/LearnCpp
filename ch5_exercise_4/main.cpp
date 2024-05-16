/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.x - Chapter 5 summary and quiz"
 *          Question #5.
 */

#include <iostream>
#include <string>
#include <string_view>

std::string
enter_name (int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}   /* enter_name() */

int
enter_age (std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;

    return age;
}   /* enter_name() */

int
main ()
{
    const std::string first_name{enter_name(1)};
    const int first_age{enter_age(first_name)};

    const std::string second_name{enter_name(2)};
    const int second_age{enter_age(second_name)};

    if (first_age > second_age)
    {
        std::cout << first_name << " (age " << first_age << ") is older than "
                  << second_name << " (age " << second_age << ").\n";
    }
    else if (first_age < second_age)
    {
        std::cout << second_name << " (age " << second_age << ") is older than "
                  << first_name << " (age " << first_age << ").\n";
    }
    else
    {
        std::cout << first_name << " (age " << first_age
                  << ") has the same age of" << second_name << " (age "
                  << second_age << ").\n";
    }

    return (0);
}   /* main() */


/*** End of file ***/
