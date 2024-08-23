#include <stdio.h>
int add(int number1, int number2) {
    int carry;

    while (number2 != 0) {
        carry = number1 & number2;
        number1 = number1 ^ number2;
        number2 = carry << 1;
    }

    return number1;
}

int sub(int number1, int number2) {
    number2 = ~number2;
    return add(number1, add(number2, 1));
}

int mul(int number1, int number2) {
    int result = 0;

    while (number2 != 0) {
        if (number2 & 1) {
            result = add(result, number1);
        }
        number1 <<= 1;
        number2 >>= 1;
    }

    return result;
}
float divide(int number1, int number2) {
    float average = (float)(number1 + number2) / 2;
    return average;
}
