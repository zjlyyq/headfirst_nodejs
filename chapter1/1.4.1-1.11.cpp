#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cout << "请输入俩整数：" << std::endl;
    std::cin >> a >> b;

    for(int i = a;i <= b;i ++) {
        std::cout << i << std::endl;
    }
}