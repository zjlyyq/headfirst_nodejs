#include <iostream>
#include "sales_item.h"

int main() {
    Sales_item book, total;
    std::cin >> total;
    while (std::cin >> book)
    {
        if (book.isbn() == total.isbn())
            total += book;
    }

    std::cout << total << std::endl;
    return 0;
}