/**
 * Read in a bunch of words from `cin` into a vector, convert to uppercase, then
 * print out, eight words to a line.
 */

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main(void)
{
    vector<string> words;
    string word_in;

    while (cin >> word_in)
    {
        words.push_back(word_in);
    }

    for (auto &word : words)
    {
        for (auto &c : word)
        {
            c = toupper(c);
        }
    }

    // Print out words, eight to a line
    for (decltype(words.size()) i = 0; i < words.size(); i++)
    {
        cout << words[i] << " ";
        if ((i + 1) % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl; // terminating newline

    return 0;
}
