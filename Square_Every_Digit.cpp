#include <iostream>

int square_digits(int num) {
    long long result = 0;
    long long multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        int squared = digit * digit;

        result += squared * multiplier;
        
        if (squared < 10) {
            multiplier *= 10;
        } else {
            multiplier *= 100;
        }

        num /= 10;
    }
    return result;
}