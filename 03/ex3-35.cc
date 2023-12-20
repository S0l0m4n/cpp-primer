/**
 * Use a pointer to set the elements in an array to zero.
 */

#include <iostream>
#include <iterator>     // needed for the `begin`, `end` array functions
#include <string>
//#include <vector>

using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;
using std::string;
//using std::vector;

void print_array(string prefix, int *A, size_t len)
{
    cout << prefix;
    for (unsigned i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {0,1,2,3,4,5};
    auto len = end(A) - begin(A);

    // First print out the original elements in the array
    print_array("begin: A = ", A, len);

    // Now zero out the elements with a pointer
    int *p = &A[0];

    while (p < end(A))
    {
        *p = 0;
        p++;
    }

    // Print out the zeroed array
    print_array("end  : A = ", A, len);

    return 0;
}
