/**
 * Read a sequence of integers from `cin` and store values in a vector.
 */

#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main(void)
{
    vector<int> vec;
    int x;

    while (cin >> x)
    {
        vec.push_back(x);
    }

    // Print values back out
    for (auto x : vec)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
