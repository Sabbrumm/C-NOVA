//
// Created by Sabbrumm on 18.09.2022.
//

#include <stdio.h>

const long LONG_MAX = 2147483647;
const long LONG_MIN = -2147483648;

long A;
long B;
long result;
int main() {
    A = 9;
    B = 9;
    printf("%d i %d", A, B);

        float digit;

        digit = (float)A / (float)B;
        //сложение

        // Если А и Б олин знак
        if (digit >= 0) {
            if (A>=0){
                if (LONG_MAX - A >= B){

                    result = A + B;
                    printf("Результат: %d", result);

                    // производим расчёты
                    }
                else {
                    printf("\nБАНДИТОС\n");
                    // выводим ошибку
                    }
            }
            if (A<=0) {
                if (LONG_MIN - A <= B){
                    // расчёты
                    result = A + B;
                    printf("Результат: %d", result);
                    }
                else {
                    printf("\nБАНДИТОС\n");
                    // выводим ошибку
                    }
                }
            }
        else {
            result = A + B;
            printf("Результат: %d", result);

            // производим расчёты
        }

}