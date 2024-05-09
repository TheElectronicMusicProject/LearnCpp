/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "4.x - Chapter 4 summary and quiz"
 * Question #3
 */

#include <iostream>
#include <cstdint>

const double g_gravity_const{9.80665};

static double
distance_fallen (std::int16_t time)
{
    return (g_gravity_const * static_cast<double>(time) *
            static_cast<double>(time) / 2.0);
}   /* distance_fallen() */

int
main ()
{
    std::cout << "Enter the height of the tower in meters: ";
    std::int16_t height{};
    
    if (!(std::cin >> height))
    {
        std::cerr << "Abort due to input error\n";
        return EXIT_FAILURE;
    }

    double distance{};
    std::int16_t time_count{};

    do
    {
        distance = height - distance_fallen(time_count);

        if (distance >= 0)
        {
            std::cout << "At " << time_count
                      << " seconds, the ball is at height: " << distance
                      << " meters\n";
        }
        else
        {
            std::cout << "At " << time_count
                      << " seconds, the ball is on the ground.\n";
        }

        ++time_count;
    } while (distance >= 0);
    
    return EXIT_SUCCESS;
}   /* main() */


/*** End of file ***/
