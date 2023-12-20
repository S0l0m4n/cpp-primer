/**
 * Some discussion of `auto` type.
 */

#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;     // a is an int (r is an alias for i, which has type int)
    
    const int ci = i, &cr = ci;
    auto b = ci;    // b is an int (top-level const in ci is dropped)
    auto c = cr;    // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;    // d is an int* (& of an int object is int*)
    auto e = &ci;   // e is a const int* (& of const object is a low-level const)

    auto &g = ci;   // g is a const int& that is bound to ci

    printf("BEFORE: a = %d, b = %d, c = %d, d = %p, e = %p, g = %d\n",
            a, b, c, d, e, g);

    a = 42;     b = 42;     c = 42;
//  d = 42;     e = 42;     g = 42;

    printf("AFTER : a = %d, b = %d, c = %d, d = %p, e = %p, g = %d\n",
            a, b, c, d, e, g);

    return 0;
}
