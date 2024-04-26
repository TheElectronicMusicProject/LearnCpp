#include <iostream>

static int
read_number ()
{
    int value{};

    std::cout << "Enter an integer: ";
    std::cin >> value;

    return value;
}   /*read_number() */

static int
double_number (int num)
{
    return (2 * num);
}   /* double_number() */

static void
print_double_number (int num)
{
    std::cout << "Double " << num << " is " << double_number(num)
              << std::endl;
}   /* print_number() */

int
main ()
{
    int value{read_number()};

    print_double_number(value);

    return (0);
}   /* main() */


/*** End of file ***/
