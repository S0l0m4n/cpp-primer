/**
 * What are the differences between `decltype` and `auto`?
 *
 * With `auto`:
 *  - 1. References are ignored
 *  - 2. Top-level `const` is ignored
 *
 * With `decltype`:
 *  - 1. References are not ignored.
 *  - 2. The deduced type can be a reference type.
 *      - a. The `decltype` of a pointer variable is a reference type.
 *      - b. The `decltype` of a dereferenced pointer variable is a reference type.
 *      - c. The `decltype` of an assignment is a reference type.
 *      - d. The `decltype` of a variable in parentheses is a reference type.
 *  - 3. Top-level `const` is not ignored.
 *
 * In this example, both `auto` and `decltype` will give the same type for the
 * expression, that being `int`:
 *      int a = 3;
 *      auto x = a;
 *      decltype(a) x;
 *
 * In this example, `auto` and `decltype` will give different types for the
 * same expression:
 *      int b = 3;
 *      int &c = b;
 *      auto x = c;         // `x` is of type `int`, with current value of 4
 *      decltype(c) y = b;  // `y` is of type `int&`, aliasing `b`, which equals 4
 */
