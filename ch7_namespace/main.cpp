/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "7.2 - User-defined namespaces and the scope resolution
 *          operator"
 */

#include "add.h"
#include "circle.h"
#include "growth.h"
#include <iostream>

static void
print ()
{
    std::cout << " there\n";
}   /* print() */

namespace foo
{
    void
    print ()
    {
        std::cout << "Hello";
    }   /* print() */

    void
    print_hello_there ()
    {
        print();
        ::print();
    }   /* print_hello_there() */

    int
    do_something (int varx, int vary)
    {
        return (varx + vary);
    }   /* do_something() */

    namespace doo
    {
        int
        add (int varx, int vary)
        {
            return (varx + vary); 
        }   /* add() */
    }
}

// Since C++17 we can create a nested namespace by directly writing as follows,
// by mantaining a separate foo namespace
//
#if 0
namespace foo::doo
{
    int
    add (int varx, int vary)
    {
        return (varx + vary); 
    }   /* add() */
}
#endif

namespace goo
{
    int
    do_something (int varx, int vary)
    {
        return (varx - vary);
    }   /* do_something() */
}

int
main ()
{
    // Two different namespaces with the same function name won't collide
    //
    std::cout << foo::do_something(4, 3) << '\n';
    std::cout << goo::do_something(4, 3) << '\n';

    // Global resolution - same as calling the function without scope resolution  
    //
    foo::print();
    ::print();

    // Compiler search for print() with no scope resolution provided and
    // because it is inside the foo namespace, it calls foo::print() - if not
    // found, it will check the global namespace.
    // Then ::print() explicitly call the global version.
    //
    foo::print_hello_there();

    // Using forward declaration of content in namespaces
    //
    std::cout << basic_math::add(4, 3) << '\n';

    // Multiple namespace blocks are allowed
    //
    std::cout << basic_math::pi << '\n';
    std::cout << basic_math::e << '\n';

    // Nested namespaces
    //
    std::cout << foo::doo::add(1, 2) << '\n';

    // We can create an alias to simplify the overall namespace, it ends at the
    // bottom block
    //
    namespace active = foo::doo;
    std::cout << active::add(1, 2) << '\n';

    return 0;
}   /* main() */


/*** End of file ***/
