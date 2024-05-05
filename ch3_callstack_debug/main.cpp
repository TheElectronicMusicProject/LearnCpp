/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "3.9 - Using an integrated debugger: The call stack"
 * 
 * For gdb debugger there are the following commands:
 * - "Call stack": command `where`
 * - "Line which called the function": command `up`
 * - "Line being executed inside the frame": command `down`
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
a_fnt ()
{
    std::cout << "a_fnt() called\n";
}   /* a_fnt() */

static void
b_fnt ()
{
    std::cout << "b_fnt() called\n";
    a_fnt();
}   /* b_fnt() */

int
main ()
{
#ifdef DEBUG
    std::cout << std::unitbuf;
#endif /* DEBUG */
    a_fnt();
    b_fnt();

    return (0);
}   /* main() */


/*** End of file ***/
