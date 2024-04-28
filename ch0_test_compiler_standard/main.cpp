/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "0.13 — What language standard is my compiler using?"
 */

#include <iostream>
#include <limits>
#include <stdint.h>

const int32_t g_num_standards(7);
const int32_t g_std_code[g_num_standards] = {199711L, 201103L, 201402L, 201703L,
                                             202002L, 202302L, 202612L};
const char * g_std_name[g_num_standards] = {"Pre-C++11", "C++11", "C++14",
                                            "C++17", "C++20", "C++23", "C++26"};

static int32_t
get_cpp_standard ()
{
#if defined (_MSVC_LANG)
    return _MSVC_LANG;
#elif defined (_MSC_VER)
    return 1;
#else
    return __cplusplus;
#endif
}   /* get_cpp_standard() */

int
main ()
{
    int32_t standard = get_cpp_standard();

    if (1 == standard)
    {
        std::cout << "Error: Unable to determine your language standart\n";
        return 0;
    }

    std::cout << "Your compiler is using language standard: ";

    for (int32_t idx = 0; idx < g_num_standards; ++idx)
    {
        if (standard <= g_std_code[idx])
        {
            std::cout << g_std_name[idx];

            if (standard < g_std_code[idx])
            {
                std::cout << " (preview)";
            }

            break;
        }
    }

    std::cout << std::endl;

#if 0
    // Reset any error flags.
    //
    std::cin.clear();

    // Ignore any characters in the input buffer until we find an enter
    // character.
    //
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Get one more char from the user.
    //
    std::cin.get();
#endif
    return (0);
}   /* main() */


/*** End of file ***/
