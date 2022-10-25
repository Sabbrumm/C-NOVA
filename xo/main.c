//
// Created by Sabbrumm on 25.10.2022.
//

#include <conio.h>
#include <stdio.h>
#include <windows.h>

int board[14][14] = {{0}};

int doexit = 0;

int screen = 0;
// 0 - Главное меню
// 1 - Настройка игры
// 2 - Игра
// 3 - Победа Х
// 4 - Победа 0
// 5 - Ничья
// 6 - Экран ошибки


int setupcou = 0;
// Экран Настроек
// 0 - длина
// 1 - высота
// 2 - Х для победы
// 3 - 0 для победы
// 4 - Начало игры (переключение на экран 2)



int Width = 0;
int Height = 0;

int CrossMin = 0;
int OsMin = 0;

int check_all_before_start(){
    if (Width<2 || Width > 14){
        return 0;
    }
    if (Height<2 || Height > 14){
        return 0;
    }
    if (CrossMin<2 || CrossMin > 14){
        return 0;
    }
    if (OsMin<2 || OsMin > 14){
        return 0;
    }
    return 1;
}

void CenterMenuChoses(char* S, int boo, int digit) {
    const int menulen = 62;
    unsigned int digitlen = 0;
    if (digit != -1) {
        char digitstr[10];
        itoa(digit, digitstr, 10);
        digitlen = strlen(digitstr);
    }
    unsigned int otherstringlen = strlen(S)/2;
    int somespaces = (int)(menulen-digitlen-otherstringlen)/2;
    if (!boo){
        for (int i = 0; i<somespaces; i++){
            printf(" ");
        }
        printf("%s", S);
        if (digitlen!=0){
            printf("%d", digit);
        }
    }
    else{
        for (int i = 0; i<somespaces-3; i++){
            printf(" ");
        }
        printf(">> ");
        printf("%s", S);
        if (digitlen!=0){
            printf("%d", digit);
        }
        printf(" <<");
    }


}

void VictoryScreenX(){
    printf("==============================================================\n"
           "\n"
           "  ########  ########  ########  ########      ####    ######\n"
           "  ##    ##  ##    ##  ##        ##          ##  ##  ##    ##\n"
           "  ##    ##  ##    ##  ######    ########    ##  ##  ##    ##\n"
           "  ##    ##  ##    ##  ##    ##  ##          ##  ##  ########\n"
           "  ##    ##  ##    ##  ##    ##  ##        ########  ##    ##\n"
           "  ##    ##  ########  ########  ########  ##    ##  ##    ##\n"
           "\n"
           "\n"
           "                          XX    XX\n"
           "                          XX    XX\n"
           "                            XXXX  \n"
           "                          XX    XX\n"
           "                          XX    XX\n"
           "                          XX    XX\n"
           "\n"
           "==============================================================");
}

void VictoryScreenO(){
    printf("==============================================================\n"
           "\n"
           "  ########  ########  ########  ########      ####    ######\n"
           "  ##    ##  ##    ##  ##        ##          ##  ##  ##    ##\n"
           "  ##    ##  ##    ##  ######    ########    ##  ##  ##    ##\n"
           "  ##    ##  ##    ##  ##    ##  ##          ##  ##  ########\n"
           "  ##    ##  ##    ##  ##    ##  ##        ########  ##    ##\n"
           "  ##    ##  ########  ########  ########  ##    ##  ##    ##\n"
           "\n"
           "\n"
           "                          OOOOOOOO\n"
           "                          OO    OO\n"
           "                          OO    OO\n"
           "                          OO    OO\n"
           "                          OO    OO\n"
           "                          OOOOOOOO\n"
           "\n"
           "==============================================================");
}

void DrawScreen(){
    printf("==============================================================\n"
           "\n"
           "       ##    ##  ##    ##  ##    ##  ##          ######     \n"
           "       ##    ##  ##  ####  ##    ##  ##        ##    ##     \n"
           "       ########  ####  ##  ##    ##  ######    ##    ##     \n"
           "       ##    ##  ##    ##    ######  ##    ##    ######     \n"
           "       ##    ##  ##    ##        ##  ##    ##  ##    ##     \n"
           "       ##    ##  ##    ##        ##  ######    ##    ##     \n"
           "       \n"
           "\n"
           "                      OOOOOOOO  XX    XX\n"
           "                      OO    OO  XX    XX\n"
           "                      OO    OO    XXXX  \n"
           "                      OO    OO  XX    XX\n"
           "                      OO    OO  XX    XX\n"
           "                      OOOOOOOO  XX    XX\n"
           "\n"
           "==============================================================");
}

void StartScreen(){
    printf("==============================================================\n"
           "\n"
           "                      XX    XX  OOOOOOOO\n"
           "                      XX    XX  OO    OO\n"
           "                        XXXX    OO    OO\n"
           "                      XX    XX  OO    OO\n"
           "                      XX    XX  OO    OO\n"
           "                      XX    XX  OOOOOOOO\n"
           "\n"
           "                   Нажмите Enter для начала\n"
           "                    Нажмите Esc для выхода\n"
           "\n"
           "==============================================================");
}

void SetupScreen(){
    printf("==============================================================\n"
           "\n");
    printf("                 === Экран настроек игры ===");
    printf("\n");
    printf("\n");
    printf("        ==! Ограничения на все значения: от 2 до 14 !==");
    printf("\n");
    printf("\n");
    CenterMenuChoses("Длина поля: ", setupcou==0, Width);
    printf("\n");
    CenterMenuChoses("Высота поля: ", setupcou==1, Height);
    printf("\n");
    printf("\n");
    CenterMenuChoses("Крестиков для победы: ", setupcou==2, CrossMin);
    printf("\n");
    CenterMenuChoses("Ноликов для победы: ", setupcou==3, OsMin);
    printf("\n");
    printf("\n");
    CenterMenuChoses("[Начать игру!]", setupcou==4, -1);
    printf("\n");
    printf("\n");
    printf("==============================================================");
}

void ErrorScreen(){
    printf("==============================================================\n"
           "\n"
           "\n"
           "\n"
           "                            Ой-ой!\n"
           "\n"
           "          Кажется, вы ввели значение которое нельзя!\n"
           "           Измените настройки и попробуйте еще раз!\n"
           "                 \n"
           "        (ESC или Enter для возвращения в меню настроек)\n"
           "\n"
           "\n"
           "\n"
           "==============================================================");
}

void GameScreen(){
    printf("игра хахах");
}

void UI(){
    if (screen == 0){
        StartScreen();
    }
    if (screen == 1){
        SetupScreen();
    }
    if (screen == 6){
        ErrorScreen();
    }
}



#define KEY_ESC 27
#define KEY_CONTROL 224
#define KEY_BACKSPACE 8
#define KEY_ENTER 13
#define KEY_CONTROL_DOWN 80
#define KEY_CONTROL_UP 72

#define KEY_0 48
#define KEY_9 57

void Intercept(){
    int key = _getch();
    if (key == KEY_ESC){
        if (screen == 0){
            doexit=1;
        }
        if (screen == 1){
            setupcou = 0;
            screen = 0;
        }
        if (screen == 6){
            setupcou = 0;
            screen = 1;
        }
    }
    if (key == KEY_ENTER){
        if (screen == 0){
            screen = 1;
        }
        else if (screen == 1){
            if (setupcou == 4){
                if (check_all_before_start()){
                    setupcou = 0;
                    screen = 2;
                }
                else {
                    screen = 6;
                    setupcou = 0;
                }
            }
        }
        else if (screen == 6){
            setupcou = 0;
            screen = 1;
        }
    }
    if (key == KEY_CONTROL){
        int key2 = _getch();
        if (key2 == KEY_CONTROL_DOWN){
            if (screen == 1){
                setupcou+=1;
                if (setupcou==5){
                    setupcou = 0;
                }
            }
        }
        if (key2 == KEY_CONTROL_UP){
            if (screen == 1){
                setupcou-=1;
                if (setupcou==-1){
                    setupcou = 4;
                }
            }
        }
    }
    if (key >=KEY_0 && key<=KEY_9){
        if (screen == 1){
            int num = key-48;
            if (setupcou==0){
                if (Width*10+num<=14){
                    Width=Width*10+num;
                }
            }
            if (setupcou==1){
                if (Height*10+num<=14){
                    Height=Height*10+num;
                }
            }
            if (setupcou==2){
                if (CrossMin*10+num<=14){
                    CrossMin=CrossMin*10+num;
                }
            }
            if (setupcou==3){
                if (OsMin*10+num<=14){
                    OsMin=OsMin*10+num;
                }
            }

        }
    }
    if (key == KEY_BACKSPACE){
        if (screen == 1){
            if (setupcou==0){
                Width=Width/10;
            }
            if (setupcou==1){
                Height=Height/10;
            }
            if (setupcou==2){
                CrossMin=CrossMin/10;
            }
            if (setupcou==3){
                OsMin=OsMin/10;
            }
        }
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    system("color 0F");
    while (!doexit){
        system("cls");
        UI();
        Intercept();
    }
    return 0;
}