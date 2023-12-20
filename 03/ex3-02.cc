/**
 * Read from standard input one line (or word) at a time.
 */

#include <iostream>
#include <string>

#define ONE_LINE_AT_A_TIME (true)

using std::cin; using std::cout; using std::endl;
using std::string; using std::getline;

int main(void)
{
    string s;

#if ONE_LINE_AT_A_TIME 
    while (getline(cin, s)) 
    {
        // All text is read into the string up to the newline char
        cout << "-> " << s << endl;
    }
#else // one word at a time
    while (cin >> s)
    {
        // Leading and trailing whitespace is ignored to read in each word
        cout << "-> " << s << endl;
    }
#endif

    return 0;
}
