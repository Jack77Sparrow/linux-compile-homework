#include <stdio.h>
#include "calc.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Помилка: ділення на нуль неможливе!\n");
        return 0; // Повертаємо 0 у разі помилки
    }
    return a / b;
}
