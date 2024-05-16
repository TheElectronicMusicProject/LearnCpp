/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.x - Chapter 5 summary and quiz"
 *          Question #3.
 */

#include <iostream>

// This function cannot be made constexpr because output and input can only be
// done at runtime.
// The versions of `operator<<` and `operator>>` that do output and input don't
// support constexpr.
//
double
get_tower_height ()
{
    std::cout << "Enter the height of the tower in meters: ";
    double tower_height{};
    std::cin >> tower_height;

    return tower_height;
}   /* get_tower_height() */

// Reminder: a constexpr function can be evaluated at compile-time or runtime.
// - If its arguments are constexpr, it can be called at compile-time.
// - In this case, it's called at runtime because the argument for tower_height
//   isn't constexpr.
// If a function can be made constexpr, it should be.
// Remember: function parameters are not constexpr, even in a constexpr
// function.
//
constexpr double
calculate_ball_height (double tower_height,
                       int seconds)
{
    // constexpr because it's a compile-time constant.
    //
    constexpr double gravity{9.8};

    // These variables can't be constexpr since their initializers aren't
    // constant expressions.
    //
    const double distance_fallen{(gravity * (seconds * seconds)) / 2.0};
    const double current_height{tower_height - distance_fallen};

    return current_height;
}   /* calculate_ball_height() */

void
print_ball_height (double ball_height,
                   int seconds)
{
    if (ball_height > 0.0)
    {
        std::cout << "At " << seconds << " seconds, the ball is at height: "
                  << ball_height << " meters\n";
    }
    else
    {
        std::cout << "At " << seconds
                  << " seconds, the ball is on the ground\n";
    }
}   /* print_ball_height() */

void
print_calculated_ball_height (double tower_height,
                              int seconds)
{
    // ball_height can only be const (not constexpr) because its initializer is
    // not a constant expression.
    //
    const double ball_height{calculate_ball_height(tower_height, seconds)};
    print_ball_height(ball_height, seconds);
}   /* print_calculated_ball_height() */

int
main ()
{
    // tower_height can only be const (not constexpr) because its initializer is
    // not a constant expression.
    //
    const double tower_height{get_tower_height()};

    print_calculated_ball_height(tower_height, 0);
    print_calculated_ball_height(tower_height, 1);
    print_calculated_ball_height(tower_height, 2);
    print_calculated_ball_height(tower_height, 3);
    print_calculated_ball_height(tower_height, 4);
    print_calculated_ball_height(tower_height, 5);

    return (0);
}   /* main() */


/*** End of file ***/
