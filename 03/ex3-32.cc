/**
 * Copy an array to another. Repeat with vectors. The value of each element is
 * equal to its index.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    const unsigned size = 10;
    int A[size] = {0};

    for (unsigned i = 0; i < size; i++)
    {
        A[i] = i;
    }

    int B[size] = {0};
    for (unsigned i : A)
    {
        B[i] = A[i];
    }

    // Test if copy succeeded
    cout << "B[3] = " << B[3] << endl;

    // --- Redo with vectors ---

    vector<int> x = {};
    // NOTE: Do not write `{0}` as this will add an element equal to 0 in the vector

    for (unsigned i = 0; i < size; i++)
    {
        x.push_back(i);
    }

    // We can copy vectors directly, unlike arrays
    vector<int> y = x;

    // Test if copy succeeded
    cout << "y[3] = " << y[3] << endl;

    return 0;
}
