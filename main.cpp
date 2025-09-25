#include <iostream>
#include "is_palindrom.h"

int main(){

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << std::endl;

    if (is_palindrom(number)){
        std::cout << "It is a palindrom";
    } else {
        std::cout << "It is not palindrom";
    }

    return 0;

}
