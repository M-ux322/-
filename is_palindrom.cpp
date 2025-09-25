#include <iostream>
#include "is_palindrom.h"

bool is_palindrom(int x){
    int number = x;
    int revers = 0;

    if (x < 0) {
        return false;
    }

    while (number != 0){
        revers = revers * 10 + number % 10;
        number = number / 10;
    }

    if (revers == x){
        return true;
    } else{
        return false;
    }
}