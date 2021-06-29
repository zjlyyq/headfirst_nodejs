#include <iostream>
#include "sales_item.h"
#include <vector>

using std::vector;
int main() {
    vector<Sales_item> books;
    Sales_item book;
    while (std::cin >> book)
    {
        bool flag = false;
        for(int i = 0;i < books.size();i ++) {
            if (books[i].isbn() == book.isbn()) {
                books[i] += book;
                flag = true;
            }
        }
        if (!flag) {
            books.push_back(book);
        }
    }
    for(int i = 0;i < books.size();i ++) {
        std::cout << books[i] << std::endl;
    }
    return 0;
}