#include <iostream>
#include "is_palindrom.h"

#include <iostream>

bool is_palindrom(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int left = 0;
    int right = len - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
