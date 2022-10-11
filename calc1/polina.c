#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <wincon.h>

float getNumber(const char* s)
{
    float n;
    printf(s);
    while ((scanf("%f", &n) != 1))
    {
        printf("Неподходящий символ. Введите число: ");
        while (getchar() != '\n');
    }
    return n;
}

int main(){
    //setlocale(LC_ALL, "Rus");
    SetConsoleOutputCP(CP_UTF8);
    int exitKey = 0;
    do {
        printf("Калькулятор может выполнить функцию:\n\n1) Сложение\n2) Умножение\n3) Вычитание\n4) Деление\n5) Возведение в степень\n6) Извлечение корня\n\nДля выбора \
 нажмите 1-6\nлибо 9 для выхода из программы\n\n");
        int opnumber;
        float num11 = 0;
        float ch1 = 0;
        float ch2 = 0;
        float result = 0;

/* Ввод номера арифметической операции */
        do {
            printf("Введите номер операции от 1 до 6\n или 9 для выхода: ");
            while ((scanf("%d", &opnumber) != 1))
            {
                printf("Введите номер операции от 1 до 6\n или 9 для выхода: ");
                while (getchar() != '\n');
            }
//printf("Ввш выбор: %d\n", opnumber);
            if (opnumber == 9) {
                printf("Выход\n");
                return 0;
            }
        }
        while (!(opnumber >= 1 && opnumber <= 6));

/* Ввод операнды взависимости от операции */
        const char* str1 = "Введите первое число: ";
        const char* str2 = "Введите второе число: ";
        const char* str3 = "Введите число, которое нужно возвести в степень: ";
//const char* str4 = "Введите степень: ";
        const char* str5 = "Введите число, из которого нужно извлечь корень (калькулятор работает только с положительными числами): ";
        const char* str6 = "Введите степень корня: ";
        switch (opnumber) {
            case 1:
            {
                ch1 = getNumber(str1);
                ch2 = getNumber(str2);
                result = ch1 + ch2;
            }
                break;
            case 2:
            {
                ch1 = getNumber(str1);
                ch2 = getNumber(str2);
                result = ch1 * ch2;
            }
                break;
            case 3:
            {
                ch1 = getNumber(str1);
                ch2 = getNumber(str2);
                result = ch1 - ch2;
            }
                break;
            case 4:
            {
                ch1 = getNumber(str1);
                do {
                    printf("Введите 2-е число, за исключением 0: ");
                    while ((scanf("%f", &ch2) != 1))
                    {
                        printf("Неподходящий символ. Введите число, за исключением 0: ");
                        while (getchar() != '\n');
                    }
                } while (ch2 == 0);
                result = ch1 / ch2;
            }
                break;
            case 5:
            {
                ch1 = getNumber(str3);
//ch2 = getNumber();
                printf("Введите степень, в которую нужно возвести число: ");
                while ((scanf("%f", &ch2) != 1))
                {
                    printf("Неподходящий символ. Введите число: ");
                    while (getchar() != '\n');
                }

                result = pow(ch1, ch2);
            }
                break;
            case 6:
            {
                printf("Калькулятор извлекает корень только из положительных чисел\n");
                num11 = getNumber(str5);
                ch1 = fabs(num11);

                printf("Введите степень корня: ");
                while ((scanf("%f", &ch2) != 1))
                {
                    printf("Неподходящий символ. Введите число: ");
                    while (getchar() != '\n');
                }
                if (ch2 == 0) {
                    result = num11;
                }
                else {
                    if (num11 < 0) {
                        result = -1 * pow(ch1, (double)1 / ch2);
                    }
                    else {
                        result = pow(ch1, (double)1 / ch2);}};

            }}

        printf("Результат: %d\n", (long)result);
        printf("Для продолжения нажмите 1, для выхода нажмите 0 ");

        while ((scanf("%d", &exitKey) != 1))
        {
            printf("Для продолжения нажмите с, для выхода нажмите q ");
            while (getchar() != '\n');
        }
        system("cls");
    }
while (exitKey!=1);
return 0;
}