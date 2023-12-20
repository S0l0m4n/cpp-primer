/**
 * Read in several transactions and count how many transactions for each ISBN.
 * Assume that transactions for each ISBN occur together.
 *
 * This is the proper bookstore program implementation, using only facilities
 * we've seen so far; in particular, no strings.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, total;
    
    std::cout   << "Please input Sales_item transactions:"
                << std::endl;

    if (!(std::cin >> total))
    {
        // Bad initial input
        std::cout << "No data?\n";
        return -1;
    }

    while (std::cin >> item)
    {
        if (total.isbn() == item.isbn())
        {
            // Another transaction with the same ISBN
            total += item;
        }
        else
        {
            // A new ISBN was read in
            // First, print results for previous ISBN
            std::cout   << total << std::endl;
            // Then start counting for the new ISBN
            total = item;
        }
    }

    // Print result for the last ISBN
    std::cout << total << std::endl;

    return 0;
}
