#include <iostream>

int main() {
    std::cout << "请输入想要求和的整数：" << std::endl;
    int sum = 0, val = 0;

    while (std::cin >> val)
    {
        sum += val;
    }
    
    std::cout << "Sum is " << sum << std::endl;
}