/**
 * Experimenting with `const` types.
 */

#include <iostream>

int main()
{
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;

    printf("i = %d, j = %d, k = %d, p = %p, j2 = %d, k2 = %d\n",
            i, j, k, p, j2, k2);

    // i is a const int
    // j is an int
    // k is a int reference
    // p is a pointer to const int
    // j2 is a const int
    // k2 is a (const) int reference

    return 0;
}
