/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "3.x - Chapter 3 summary and quiz"
 * Question #3
 */

#include <iostream>

void
d_fnt ()
{
    // How's the call stack here?
}   /* d_fnt() */

void
c_fnt ()
{
}   /* c_fnt */

void
b_fnt ()
{
	c_fnt();
	d_fnt();
}   /* b_fnt() */

void
a_fnt ()
{
	b_fnt();
}   /* a_fnt() */

int
main ()
{
    a_fnt();

    return (0);
}   /* main() */


/*** End of file ***/
