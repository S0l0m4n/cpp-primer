/**
 * Write a bookstore program which accepts input of the following kind:
 *      <book_no> <units_sold> <price_per_unit>
 * While the book number is the same, the program keeps a running total of the
 * total number of units sold and the overall revenue.
 *
 * When the book number changes, the program starts a running total for the new
 * book, and prints out the info for the previous book:
 *      book number, total units sold, total revenue, average price per book
 */

#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    int units_sold;
    double revenue;
};

void printSalesData(Sales_data data)
{
    std::cout   << data.bookNo
        << " "  << data.units_sold
        << " "  << data.revenue
        << " "  << data.revenue / data.units_sold
                << std::endl;
}

int main()
{
    Sales_data data, total;
    double price;

    std::cout   << "Please input Sales_data transactions:"
                << std::endl;

    if (!(std::cin >> total.bookNo >> total.units_sold >> price))
    {
        // Bad initial input
        std::cout << "Bad data?\n";
        return -1;
    }
    else
    {
        // Calculate and store the revenue
        total.revenue = total.units_sold * price;
    }

    while (std::cin >> data.bookNo >> data.units_sold >> price)
    {
        if (total.bookNo == data.bookNo)
        {
            // Another transaction with the same ISBN
            total.units_sold += data.units_sold;
            total.revenue += data.units_sold * price;
        }
        else
        {
            // A new ISBN was read in
            // First, print results for previous ISBN
            printSalesData(total);
            // Then start counting for the new ISBN
            total = data;
            total.revenue = data.units_sold * price;
        }
    }

    // Print result for the last ISBN
    printSalesData(total);

    return 0;
}
