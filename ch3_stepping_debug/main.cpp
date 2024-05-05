/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "3.6 - Using an integrated debugger: Stepping"
 * 
 * For gdb debugger there are the following commands:
 * - "Step into": command `step`
 * - "Step over": command `next`
 * - "Step out": command `finish`
 * 
 * To start debugging, use `gdb main` and then `break main` to stop on the first
 * line of code. Then `run`.
 * To run normally the rest of code, you should use `cont`.
 * Finally, `exit` to finish the debugging sessione and `quit` to quit the gdb
 * console.
 */

#include <iostream>

#define DEBUG

static void
print_value (int value)
{
    std::cout << value << '\n';
}

int
main ()
{
#ifdef DEBUG
    std::cout << std::unitbuf;
#endif /* DEBUG */
    print_value(5);

    return (0);
}   /* main() */


/*** End of file ***/
