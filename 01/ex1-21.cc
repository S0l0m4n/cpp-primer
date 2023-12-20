/**
 * Read in two Sales_item objects with the same ISBN and sum the transactions.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    
    std::cout   << "Please input two Sales_item objects with the same ISBN:"
                << std::endl;

    while ((std::cin >> item1) && (std::cin >> item2))
    {
        if (item1.isbn() == item2.isbn())
        {
            std::cout << item1 + item2 << std::endl;
        }
        else
        {
            std::cout << "ISBNs are not the same\n";
        }
        std::cout << "---\n";
    }

    return 0;
}
