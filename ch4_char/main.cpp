/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "4.11 - Chars"
 */

#include <iomanip>
#include <iostream>

int
main ()
{
    std::cout << "\"This is quoted text\"\n";
    std::cout << "This string contains a single backslash \\\n";
    std::cout << "6F is hex in char '\x6F'\n";
    std::cout << "18 is oct in char '\18'\n";

    // Deprecated
    //
    std::cout << std::setw(16) << "wchar_t: " << sizeof(wchar_t)
              << " bytes\n";
#if 0
    // For Unicode UTF-8 (not compiling before C++20)
    //
    std::cout << std::setw(16) << "char8_t: " << sizeof(char8_t)
              << " bytes\n";
#endif
    // For Unicode UTF-16
    //
    std::cout << std::setw(16) << "char16_t: " << sizeof(char16_t)
              << " bytes\n";

    // For Unicode UTF-32
    //
    std::cout << std::setw(16) << "char32_t: " << sizeof(char32_t)
              << " bytes\n";

    return (0);
}   /* main() */


/*** End of file ***/
