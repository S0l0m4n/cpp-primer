#include <iostream>

int main()
{
    int i = 100;
    const int v2 = 0;   int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    r1 = v2;    // legal:   r1 = 0
//  p1 = p2;    // illegal: p1 could possibly be used to change the low-level const of p2
    p2 = p1;    // legal:   p2 is a low-level const and cannot be used to change underlying object of p1
//  p1 = p3;    // illegal: p3 is even more severe than p2 (^^^), as the pointer itself is a top-level const
    p2 = p3;    // legal:   p2 can take on the value of a const pointer

    return 0;
}
