/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "4.6 - Fixed-width integers and size_t"
 */

#include <iomanip>
#include <cstdint>
#include <cstddef>
#include <iostream>

int
main ()
{
    std::cout << std::left;

    std::cout << std::setw(16) << "int8_t: " << sizeof(std::int8_t)
              << " bytes\n";
    std::cout << std::setw(16) << "int16_t: " << sizeof(std::int16_t)
              << " bytes\n";
    std::cout << std::setw(16) << "int32_t: " << sizeof(std::int32_t)
              << " bytes\n";
    std::cout << std::setw(16) << "int64_t: " << sizeof(std::int64_t)
              << " bytes\n";

    std::cout << std::setw(16) << "least 8 (int_least8_t): "
              << sizeof(std::int_least8_t) << " bytes\n";
    std::cout << std::setw(16) << "least 16 (int_least16_t): "
              << sizeof(std::int_least16_t) << " bytes\n";
    std::cout << std::setw(16) << "least 32 (int_least32_t): "
              << sizeof(int_least32_t) << " bytes\n";
    std::cout << std::setw(16) << "least 64 (int_least64_t): "
              << sizeof(int_least64_t) << " bytes\n";
    
    std::cout << std::setw(16) << "fast 8 (int_fast8_t): "
              << sizeof(std::int_fast8_t) << " bytes\n";
    std::cout << std::setw(16) << "fast 16 (int_fast16_t): "
              << sizeof(std::int_fast16_t) << " bytes\n";
    std::cout << std::setw(16) << "fast 32 (int_fast32_t): "
              << sizeof(int_fast32_t) << " bytes\n";
    std::cout << std::setw(16) << "fast 64 (int_fast64_t): "
              << sizeof(int_fast64_t) << " bytes\n";

    std::cout << std::setw(16) << "size_t: " << sizeof(std::size_t)
              << " bytes\n";

    return (0);
}   /* main() */


/*** End of file ***/
