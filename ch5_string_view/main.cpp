/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "5.10 - Introduction to std::string_view" + "5.11 -
 *          std::string_view (part 2)"
 */

#include <iostream>
#include <string>
#include <string_view>

// Here str is inizialized with the input parameter, without making a copy
//
static void
print_sv (std::string_view str)
{
    std::cout << str << '\n';
}   /* print_sv() */

static void
print_s (std::string str)
{
    std::cout << str << '\n';
}   /* print_s() */

int
main ()
{
    // This variabile is read-only, hence there isn't a copy of "Hello world!"
    // unlike in std::string
    //
    std::string_view str{"Hello world!"};
    print_sv(str);

    // Flexibility: initialize with C-style string literal
    //
    std::string_view str1{"Hello world!"};
    std::cout << str1 << '\n';

    // Flexibility: initialize with std::string
    //
    std::string str2{"Hello world!"};
    std::string_view str3{str2};
    std::cout << str3 << '\n';

    // Flexibility: initialize with std::string_view
    //
    std::string_view str4{str3};
    std::cout << str4 << '\n';

#if 0
    // Compile error: can't implicitly convert std::string_view to std::string
    //
    print_s(str4);
#endif

    // This is possibile when used as initializer
    //
    std::string str5{str4};
    print_s(str5);

    // This is possible with an explicit cast
    //
    print_s(static_cast<std::string>(str4));

    // An assignment doesn't change the initial string, but changes what it is
    // viewing
    //
    std::string name{"Alex"};
    std::string_view str_sv{name};
    std::cout << str_sv << '\n';

    str_sv = "John";
    std::cout << str_sv << '\n';
    std::cout << name << '\n';

    // Ok "using namespace" inside functions
    //
    using namespace std::string_literals;
    using namespace std::string_view_literals;
    std::cout << "This is a C-style string literal\n";
    std::cout << "This is a std::string literal\n"s;
    std::cout << "This is a std::string_view literal\n"sv;

    // std::string_view has full support for constexpr, and new_name in the
    // std::cout will be replaced at compile-time
    //
    constexpr std::string_view new_name{"Alex"};
    std::cout << "New name is " << new_name << '\n';

    // Undefined behavior: useing a string inside a nested block or a string
    // returned from a function (which is then destroyed after it returns) or
    // using a std::string literal or when the underlying string is modified
    // (modifying std::string invalidates all views into that string)
    //
    std::string_view str6{};

    {
        std::string str7{"Hello, dear"};
        str6 = str7;
    }

    // str7 has been destroyed so str6 is dangling
    //
    std::cout << str6 << '\n';

    // revalidation of str6 by using a new assignment
    //
    str6 = str5;

    std::string_view str8{"Peach"};
    std::cout << str8 << '\n';

    // Remove 1 character from the left side (we do not modify the string)
    //
    str8.remove_prefix(1);
    std::cout << str8 << '\n';

    // Remove 2 characters from the right side (we do not modify the string)
    // ATTENTION: this string is not NULL terminated, but the length of the
    // string is tracked (if necessary, converting to std::string will solve the
    // problem)
    //
    str8.remove_suffix(2);
    std::cout << str8 << '\n';

    // Reset the view
    //
    str8 = "Peach";

    return (0);
}   /* main() */


/*** End of file ***/
