/**
 * Determine which array definitions are legal.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int txt_size()
{
    return 10;
}

int main()
{
    unsigned buf_size = 1024;
    int ia[buf_size];   // not legal: buf_size is not const
    int ib[4 * 7 - 14]; // legal: literal expression for dimension evaluates to constant
    int ic[txt_size()]; // not legal: txt_size does not return a constant value
    char st[12] = "fundamental";    // not legal: array does not have space for null byte

    cout << ia[0] << " " << ib[0] << " " << ic[0] << " " << st[0] << endl;

    return 0;
}
