/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "3.7 - Using an integrated debugger: Running an breakpoints"
 * 
 * For gdb debugger there are the following commands:
 * - "Run to cursor": command `until <line-number>` or `advance <line-number>`
 * - "Continue": command `cont`
 * - "Start": command `run`
 * - "Breakpoint": command either`break <line-number>` or
 * `break <function-name>`
 * - "Set next statement": command `jump <line-number>`
 * - "Step back": `reverse-XXX` commands (see docs)
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
    print_value(6);
    print_value(7);

    return (0);
}   /* main() */


/*** End of file ***/
