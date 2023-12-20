/**
 * Read in a bunch of Sales_item objects and write each transaction to stdout.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    
    std::cout << "Please input a Sales_item object:" << std::endl;

    while (std::cin >> item)
    {
        std::cout << item << std::endl;
        std::cout << "Please input a Sales_item object:" << std::endl;
    }

    return 0;
}
