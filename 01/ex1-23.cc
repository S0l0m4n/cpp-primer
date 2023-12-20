/**
 * Read in several transactions and count how many transactions for each ISBN.
 * Assume that transactions for each ISBN occur together.
 */

#include <iostream>
#include <string>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    std::string isbn = "";
    int num_txns = 0;
    
    std::cout   << "Please input Sales_item transactions:"
                << std::endl;

    while (std::cin >> item)
    {
        if ("" == isbn)
        {
            // First pass
            isbn = item.isbn();
            num_txns++;
        }
        else if (isbn == item.isbn())
        {
            // Another transaction
            num_txns++;
        }
        else
        {
            // A new ISBN was read in
            // First, print results for previous ISBN
            std::cout   << "-> Number of transactions for "
                        << isbn << " : " << num_txns << std::endl;
            // Then save new ISBN
            isbn = item.isbn();
            num_txns = 1;
        }
    }

    return 0;
}
