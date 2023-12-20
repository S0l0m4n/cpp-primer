/**
 * Print the size and contents of a bunch of vectors using iterators.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main(void)
{
    // We list size x value for each vector
    vector<int> v1; // 0 x 0
    vector<int> v2(10); // 10 x 0
    vector<int> v3(10, 42); // 10 x 42
    vector<int> v4{10}; // 1 x 10
    vector<int> v5{10, 42}; // 2 x [10, 42]
    vector<string> v6{10}; // 10 x ""
    vector<string> v7{10, "hi"}; // 10 x "hi"

    auto x = 0;
    vector<vector<int>> V1 = {v1, v2, v3, v4, v5};
    for (auto it = V1.cbegin(); it != V1.cend(); it++)
    {
        cout << "v" << x << ": (" << it->size() << ") [ ";
        for (auto jt = it->begin(); jt != it->end(); jt++)
        {
            cout << *jt << " ";
        }
        cout << "]" << endl;
        x++;
    }

    vector<vector<string>> V2 = {v6, v7};
    for (auto it = V2.cbegin(); it != V2.cend(); it++)
    {
        cout << "v" << x << ": (" << it->size() << ") [ ";
        for (auto jt = it->begin(); jt != it->end(); jt++)
        {
            cout << *jt << " ";
        }
        cout << "]" << endl;
        x++;
    }

    return 0;
}
