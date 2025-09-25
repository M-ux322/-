#include <iostream>
#include "is_palindrom.h"

int main(){
    char word[100];
    std::cout << "Enter a word: ";
    std::cin >> word;
    std::cout << std::endl;

    if (is_palindrom(word)){
        std::cout << "It is a palindrom";
    } else {
        std::cout << "It is not palindrom";
    }

    return 0;
}
