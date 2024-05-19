/**
 * @file    main.cpp
 * @author  Filippo Graziani
 * @brief   From "O.1 - Bit flags and bit manipulation via std::bitset"
 */

#include <iostream>
#include <bitset>

int
main ()
{
    /**************************************************************************
     * FIRST WAY                                                              *
     **************************************************************************/
    std::bitset<8> b_bits{0b0000'0101};

    std::cout << "Size of bitset is: " << sizeof(std::bitset<8>) << " bytes\n";

    // Turn on the third bit
    //
    b_bits.set(3);

    // Flip the fourth bit
    //
    b_bits.flip(4);

    // Turn off the fourth bit
    //
    b_bits.reset(4);

    std::cout << "All the bits: " << b_bits << '\n';

    // Query whether a bit is 0 or 1
    //
    std::cout << "Bit 3 has value: " << b_bits.test(3) << '\n';
    std::cout << "Bit 4 has value: " << b_bits.test(4) << '\n';

    /**************************************************************************
     * SECOND WAY                                                             *
     **************************************************************************/

    [[maybe_unused]] constexpr int b_is_hungry{0};
    [[maybe_unused]] constexpr int b_is_sad{1};
    [[maybe_unused]] constexpr int b_is_mad{2};
    [[maybe_unused]] constexpr int b_is_happy{3};
    [[maybe_unused]] constexpr int b_is_laughing{4};
    [[maybe_unused]] constexpr int b_is_asleep{5};
    [[maybe_unused]] constexpr int b_is_dead{6};
    [[maybe_unused]] constexpr int b_is_crying{7};

    std::bitset<8> b_me{0b0000'0101};
    b_me.set(b_is_happy);
    b_me.flip(b_is_laughing);
    b_me.reset(b_is_laughing);

    std::cout << std::boolalpha;

    std::cout << "All the bits: " << b_me << '\n';
    std::cout << "I am happy: " << b_me.test(b_is_happy) << '\n';
    std::cout << "I am laughing: " << b_me.test(b_is_laughing) << '\n';

    // The number of bits in the bitset
    //
    std::cout << b_bits.size() << " bits are in the bitset\n";

    // The number of bits in the bitset set to true
    //
    std::cout << b_bits.count() << " bits are set to true\n";

    // True if all bits are set to true
    //
    std::cout << "All bits are true: " << b_bits.all() << '\n';

    // True if any bits are set to true
    //
    std::cout << "Some bits are true: " << b_bits.any() << '\n';

    // True if no bits are set to true
    //
    std::cout << "No bits are true: " << b_bits.none() << '\n';

    return 0;
}   /* main() */