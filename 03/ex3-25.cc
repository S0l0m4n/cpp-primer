/**
 * Cluster the input grades into one of 11 groups, using iterators.
 *
 * The groups are: 0 - 9, 10 - 19, ... , 90 - 99, 100.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main(void)
{
    vector<unsigned> scores(11, 0);

    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            auto it = scores.begin() + grade/10;
            (*it)++;
        }
    }

    cout << "0 1 2 3 4 5 6 7 8 9 #" << endl; // groups heading
    for (auto x : scores)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
