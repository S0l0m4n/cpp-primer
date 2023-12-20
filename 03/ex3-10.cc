/**
 * Read in a string and write it back out, removing all punctuation.
 */

#include <cctype>
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string; using std::getline;

int main(void)
{
    string str_in, str_out;

    while (getline(cin, str_in))
    {
        for (auto c : str_in)
        {
            if (ispunct(c))
            {
                // Skip character
            }
            else
            {
                str_out += c;
            }
        }
        cout << str_out << endl;
    }

    return 0;
}
