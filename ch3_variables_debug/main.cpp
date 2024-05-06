/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "3.8 - Using an integrated debugger: Watching variables"
 * 
 * For gdb debugger there are the following commands:
 * - "Watch a variable": command `print <expression>`
 * - "Watch window": command `watch <expression>`
 * - "Breakpoint on watched variable": command either`rwatch
 * *<variable-address>`, `watch *<variable-address>`, `awatch
 * *<variable-address>`
 * - "Expression evaluation": command `print <expression>`
 * - "Local watches": command `info locals`, `info variables`
 * 
 * To start debugging, use `gdb main` and then `break main` to stop on the first
 * line of code. Then `run`.
 * To run normally the rest of code, you should use `cont`.
 * Finally, `exit` to finish the debugging sessione and `quit` to quit the gdb
 * console.
 * To use the breakpoint on a watched variable, you should firstly use `print
 * &<variable>` and then copy the address and use it with watch (break when a
 * write occurs), rwatch (break when a read occurs), awatch (break in both
 * cases).
 */

#include <iostream>

#define DEBUG

int
main ()
{
#ifdef DEBUG
    std::cout << std::unitbuf;
#endif /* DEBUG */
    int var_x{1};
    std::cout << var_x << ' ';

    var_x += 2;
    std::cout << var_x << ' ';

    var_x += 3;
    std::cout << var_x << ' ';

    return (0);
}   /* main() */


/*** End of file ***/
