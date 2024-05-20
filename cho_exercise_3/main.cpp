/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "O.3 - Bit manipulation with bitwise operators and bit masks"
 * Question #1
 */

#include <iostream>
#include <bitset>
#include <cstdint>

int
main ()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{0x01};
    [[maybe_unused]] constexpr std::uint8_t option_edited{0x02};
    [[maybe_unused]] constexpr std::uint8_t option_favorited{0x04};
    [[maybe_unused]] constexpr std::uint8_t option_shared{0x08};
    [[maybe_unused]] constexpr std::uint8_t option_deleted{0x10};

    std::uint8_t my_article_flags{option_favorited};
    my_article_flags |= option_viewed;
    std::cout << std::bitset<8>{my_article_flags} << '\n';

    if (my_article_flags & option_deleted)
    {
        std::cout << "The bit is set\n";
    }

    my_article_flags &= static_cast<std::uint8_t>(~option_favorited);
    std::cout << std::bitset<8>{my_article_flags} << '\n';

    return 0;
}   /* main() */