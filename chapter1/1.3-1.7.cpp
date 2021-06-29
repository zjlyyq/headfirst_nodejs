/*
    不能嵌套
    错误的注释，不能嵌套会被认为是源码
*/

#include <iostream>

int main() {
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << "" /* '*/' */;
    std::cout << /* "*/" /* "/*" */;
    std::cout << "Hello World!" << std::endl;
    return -1;
}