/**
 * Use a range `for` loop to change all the characters in a string to X.
 */

#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(void)
{
    string str;

    while (cin >> str)
    {
        for (unsigned int i = 0; i < str.size(); i++)
        {
            str[i] = 'X';
        }
        cout << str << endl;
    }

    return 0;
}

/**
 * Alternative approaches:
 *  * range for loop:
 *  ```
        for (auto &c : str)
        {
            c = 'X';
        }
 *  ```
 *
 *  * while loop:
 *  ```
        unsigned int i = 0;
        while (i < str.size())
        {
            str[i] = 'X';
            i++;
        }
 * ```
 *
 * * for loop:
 * ```
        for (unsigned int i = 0; i < str.size(); i++)
        {
            str[i] = 'X';
        }
 * ```
 */
