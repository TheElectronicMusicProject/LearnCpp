/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "O.3 - Bit manipulation with bitwise operators and bit masks"
 */

#include <iostream>
#include <cstdint>

int
main ()
{
    constexpr std::uint32_t red_bits{0xFF000000};
    constexpr std::uint32_t green_bits{0x00FF0000};
    constexpr std::uint32_t blue_bits{0x0000FF00};
    constexpr std::uint32_t alpha_bits{0x000000FF};

    std::cout << "Enter a 32-bit RGBA color value in hexadecimal "
                 "(e.g. FF7F3300): ";
    std::uint32_t pixel{};
    std::cin >> std::hex >> pixel;

    const std::uint8_t red{static_cast<std::uint8_t>((pixel & red_bits) >> 24)};
    const std::uint8_t green{static_cast<std::uint8_t>((pixel & green_bits)
                                                        >> 16)};
    const std::uint8_t blue{static_cast<std::uint8_t>((pixel & blue_bits)
                                                       >> 8)};
    const std::uint8_t alpha{static_cast<std::uint8_t>(pixel & alpha_bits)};

    std::cout << "Your color contains:\n";
    std::cout << std::hex;

    std::cout << static_cast<int>(red) << " red\n";
    std::cout << static_cast<int>(green) << " green\n";
    std::cout << static_cast<int>(blue) << " blue\n";
    std::cout << static_cast<int>(alpha) << " alpha\n";

    return 0;
}   /* main() */


/*** End of file ***/
