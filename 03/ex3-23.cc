/**
 * Iterate over a vector of 10 integers to double the current value of each
 * element.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

void print_vector(string prefix, vector<int> V)
{
    cout << prefix;
    for (decltype(V.size()) i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    vector<int> V(10, 1);

    // Initialise vector with desired values
    for (decltype(V.size()) i = 0; i < V.size(); i++)
    {
        V[i] = i + 1;
    }
    print_vector("Start: ", V);

    // Double each value with an iterator
    for (auto it = V.begin(); it != V.end(); it++)
    {
        *it *= 2;
    }
    print_vector("End  : ", V);

    return 0;
}
