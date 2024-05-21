/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.x - Chapter 5 summary and quiz"
 *          Question #6.
 */

#include <iostream>
#include <string>
#include <string_view>

static std::string_view
getQuantityPhrase (int quantity)
{
    if (quantity < 0)
    {
        return "negative";
    }
    else if (0 == quantity)
    {
        return "no";
    }
    else if (1 == quantity)
    {
        return "a single";
    }
    else if (2 == quantity)
    {
        return "a couple of";
    }
    else if (3 == quantity)
    {
        return "a few";
    }
    else
    {
        return "many";
    }
}   /* getQuantityPhrase () */

static std::string_view
getApplesPluralized (int n_apple)
{
    switch (n_apple)
    {
        case 1:
            return "apple";
        break;

        default:
            return "apples";
        break;
    }
}   /* getApplesPluralized() */

int
main ()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
              << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' '
              << getApplesPluralized(numApples) << ".\n";

    return 0;
}   /* main() */


/*** End of file ***/
