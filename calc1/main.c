//
// Created by Sabbrumm on 17.09.2022.
//

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>

int main(void)
{

    // ставим русскую локализацию
    SetConsoleOutputCP(CP_UTF8);

    int inp; // клавиша, которая была введена

    short cou = 1; // счётчик действий
    long numA = 0; // число 1
    long numB = 0; // число 2

    int divide = 0; // Вывод дроби или целого числа в зависимости от последнего действия. Булево число
    int overflow = 0; // Булево число. Произошло ли переполнение

    float result = 0; // результат

    // при 0 - меню выбора первого числа
    // при 1 - меню выбора действия
    // при 2 - меню выбора второго числа

    // бесконечный цикл, прерывается по кнопке выход

    while (1)
        {
        system("cls");
        printf("Калькулятор C-NOVA.\n\n");



        // Интерфейс вычислений

        printf("---------------\n");

        if (cou==2){
            printf("%d\n", numA);
        }
        else if (cou==3){
            printf("%d\n", numB);
        }
        else {
            if (overflow == 1)
            {
                printf("Переполнение. Попробуйте сложить числа поменьше\n");
            }
            else
            {
                if (divide == 0)
                {
                    printf("%d\n", (int) result);
                }
                else
                {
                    printf("%.3f\n", result);
                }

            };
        };

        printf("---------------\n\n");

        //





        // Меню


        // Пункт 1
        printf("1) Помощь ");
        if (cou==1)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 2
        printf("2) Число A (%d) ", (int)numA);
        if (cou==2)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 3
        printf("3) Число B (%d) ", (int)numB);
        if (cou==3)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 4
        printf("4) Сложить A и B ");
        if (cou==4)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 5
        printf("5) Вычесть B из A ");
        if (cou==5)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 6
        printf("6) Умножить A на B ");
        if (cou==6)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 7
        printf("7) Поделить A на B ");
        if (cou==7)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 8
        printf("8) Обнулить числа и результат (Del) ");
        if (cou==8)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 9
        printf("9) Перестановка чисел (Tab) ");
        if (cou==9)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 10
        printf("10) Выход из программы (Escape) ");
        if (cou==10)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Динамическое меню помощи

            printf("---------------\n");

            // при варианте помощь
            if (cou==1)
            {
                printf("Введите числа A и B через пункты 2 и 3 (для инверсии числа нажмите -)\n"
                       "Используйте клавиши, указанные в скобках для быстрого выполнения действий\n"
                       "После вычислений, число А автоматически примет значение результата, если это возможно.\n");
            }

            // при варианте числа A
            if (cou==2)
            {
                printf("\nВводите цифры с клавиатуры или нажмите BackSpace, чтобы стереть последнюю цифру\n\n");
            }

            // при варианте числа B
            if (cou==3)
                {
                    printf("\nВводите цифры с клавиатуры или нажмите BackSpace, чтобы стереть последнюю цифру\n\n");
                }

            // при варианте сложения
            if (cou==4)
                {
                    printf("\n%d+%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте вычитания
            if (cou==5)
                {
                    printf("\n%d-%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте умножения
            if (cou==6)
                {
                    printf("\n%d*%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте деления
            if (cou==7)
                {
                    printf("\n%d/%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте обнуления
            if (cou==8)
                {
                    printf("\nНажмите Enter для обнуления чисел\n\n");
                }

            // при варианте смены
            if (cou==9)
                {
                    printf("\nНажмите Enter для того чтобы поменять числа A и B местами\n\n");
                }

            // при варианте выхода
            if (cou==10)
                {
                    printf("\nНажмите Enter для выхода из программы\n\n");
                }
            printf("---------------\n\n");

        // Закрываем меню помощи


        // Обработка нажатий

        inp = _getch();
        printf("\nВВОД %d\n", inp);

        // Нажали BackSpace
        if (inp == 8){
            if (cou==2){
                numA = numA / 10;
                continue;
            }
            if (cou==3){
                numB = numB/10;
                continue;
            }
        }

        // Нажали минус
        if (inp == 45){

            // Если выбрано число A
            if (cou==2){
                numA = -1 * numA;
                continue;
            }
            if (cou==3){
                numB = -1 * numB;
                continue;
            }
        }

        // Нажали Enter
        if (inp == 13){


            // 4. Сложение
            if (cou==4){

                // Переполнение чек

                // Одинаковый знак
                if (numA/numB >= 0){

                    // и этот знак +
                    if (numA >= 0){
                        if ((LONG_MAX-numA > numB))
                        {
                            result = numA + numB;
                        }
                        else
                        {
                            overflow = 1;
                            result = 0;
                        }
                    }

                    // и этот знак -
                    if (numA < 0){
                        if ((LONG_MIN-numA < numB)){
                            result = numA + numB;
                        }
                        else
                        {
                            overflow = 1;
                            result = 0;
                        }
                    }

                }

                // Разный знак
                if (numA/numB < 0){
                        result = numA + numB;
                }

                divide = 0;
                continue;
            }

            // 5. Вычитание
            if (cou==5){
                if ((LONG_MAX-numA > -1*numB) && (LONG_MIN-numA) < -1*numB){
                    result = numA - numB;
                }
                else {
                    overflow = 1;
                    result = 0;
                }

                divide = 0;
                continue;
            }

            // 6. Умножение
            if (cou==6){
                result = numA * numB;
                divide = 0;
                continue;
            }

            // 7. Деление
            if (cou==7){
                result = (float)numA / (float)numB;
                divide = 1;
                continue;

            }

            // 8. Обнуление чисел
            if (cou == 8){
                numA = 0;
                numB = 0;
                result = 0;
                divide = 0;
                cou = 2;
                continue;
            }

            // 9. Перестановка
            if (cou == 9){
                long numC = numA;
                numA = numB;
                numB = numC;
                result = 0;
                cou = 2;
                continue;
            }

            // 10. Выход
            if (cou==10) {break;}
        }

        // Если нажаты цифры от 0 до 9
        if (inp >= 48 && inp <=57)

        {
            // цифра которую ввел юзер
            long inpnum = inp-48;

            // если мы в пункте числа А
            if (cou==2){

                // если число A больше нуля
                if (numA>=0){

                    // без переполнения
                    if ((LONG_MAX - inpnum)/10 >= numA)

                    numA = numA*10 + inpnum;
                }
                else
                {
                    // без переполнения
                    if ((LONG_MIN + inpnum)/10 <= numA )
                    numA = numA*10 - inpnum;
                }

                continue;
            }
            if (cou==3){
                if (numB>=0){

                    // без переполнения
                    if ((LONG_MAX - inpnum)/10 >= numB)
                    numB = numB*10 + inpnum;
                }
                else
                {
                    // без переполнения
                    if ((LONG_MIN + inpnum)/10 <= numB)
                    numB = numB*10 - inpnum;
                }
                continue;
            }
        }

        // Нажали стрелку или del
        if (inp == 224)
        {
            int inp2 = getch();

            // Стрелочка вниз
            if (inp2==80){
                cou+=1;
                if (cou==11){
                    cou=1;
                }
                continue;
            }

            // Стрелочка вверх
            if (inp2==72){
                cou-=1;
                if (cou==0){
                    cou=10;
                }
                continue;
            }

            // 8. Delete
            if (inp2 == 83){
                numA = 0;
                numB = 0;
                cou = 2;
                continue;
            }

        }

        // Нажали Tab
        if (inp == 9){
            long numC = numA;
            numA = numB;
            numB = numC;
            result = 0;
            cou = 2;
            continue;
        }

        // Нажали Esc
        if (inp == 27)
        {
            break;
        }

        };
    return 0;
};