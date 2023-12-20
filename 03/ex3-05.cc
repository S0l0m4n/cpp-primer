/**
 * Read in strings from standard input and concatenate into a larger string.
 */

#include <iostream>
#include <string>

#define ADD_ONE_SPACE (true)

using std::cin; using std::cout; using std::endl;
using std::string;

int main(void)
{
    string s;
    string total = "";

    while (cin >> s)
    {
#if ADD_ONE_SPACE
        total += s + " ";
#else
        total += s;
#endif
    }

    cout << total << endl;

    return 0;
}
