//
//  main.cpp
//  cpp
//
//  Created by wanghuai on 2017/5/18.
//  Copyright © 2017年 wanghuai. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    
    unsigned u = 10, u2 = 42;
    std::cout << u2-u << std::endl;
    std::cout << u-u2 << std::endl;
    
    int i = 10, i2 = 42;
    std::cout << i2-i << std::endl;
    std::cout << i-i2 << std::endl;
    std::cout << i-u << std::endl;
    std::cout << u-i << std::endl;
    return 0;
}
