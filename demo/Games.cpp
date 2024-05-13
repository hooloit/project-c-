#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <unistd.h>
#include <termios.h>
#include <ctime>
#include <fcntl.h>
#include <algorithm>
#include <map>
#include <cmath>
#include <tuple>
#include <thread>
#include <chrono>
#include <sys/ioctl.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#define CLEAR u8"\033[2J\033[1;1H" /* clear console */

class Games
{
private:

public:
struct termios saved_attributes;


void reset_input_mode (void)
{
    tcsetattr (STDIN_FILENO, TCSANOW, &saved_attributes);
}

    void set_input_mode (void)
{
    struct termios tattr;
    char *name;

    /* Make sure stdin is a terminal. */
    if (!isatty (STDIN_FILENO))
    {
        fprintf (stderr, "Not a terminal.\n");
        exit (EXIT_FAILURE);
    }

    /* Save the terminal attributes so we can restore them later. */
    tcgetattr (STDIN_FILENO, &saved_attributes);
    atexit (reset_input_mode);

    /* Set the funny terminal modes. */
    tcgetattr (STDIN_FILENO, &tattr);
    tattr.c_lflag &= ~(ICANON|ECHO); /* Clear ICANON and ECHO. */
    tattr.c_cc[VMIN] = 2;
    tattr.c_cc[VTIME] = 0;
    tcsetattr (STDIN_FILENO, TCSAFLUSH, &tattr);
}

    void TwentyOne()
    {
        int a[42];
        int b; // это 1 или 2 тоесть брать или не барть следующую карту
        int score1;
        int score2;
        int number = 0;
        int deck[13][4]{
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4},
            {5, 5, 5, 5},
            {6, 6, 6, 6},
            {7, 7, 7, 7},
            {8, 8, 8, 8},
            {9, 9, 9, 9},
            {10, 10, 10, 10},
            {11, 11, 11, 11},          
            {12, 12, 12, 12},
            {13, 13, 13, 13},
        };

        char sign[14] {'T', '2', '3', '4', '5', '6', '7', '8', '9', '1', 'B', 
                        'D', 'K'};
        int sign1[42];
        char card[10][15]{
            "|------------|",
            "|            |",
            "|  ?         |",
            "|            |",
            "|            |",
            "|            |",
            "|            |",
            "|         ?  |",
            "|            |",
            "|------------|",

        };
        srand(time(0));

        for(int i = 0; i < 52; i++){ // заполняю 52 карты в нашу колоду
            a[i] = rand() % 13 + 1;
        }

        score1 = a[0];
        for(int i = 0; i < 13; i++){
            for (int j = 0; j < 4; j++)
                if (a[0] == deck[i][j]){
                    deck[i][j] = 0;
                }
        }

        cout << "Тебе выпала: " << a[0] << endl;
        for(int i = 0; i < 42; i++) // Запомниаю номера знаков  в будущем поможет 
        {
            sign1[i] = a[i] - 1;
        }

        for(int i = 0; i < 10; i++){ //Подставления нужного знака (Т, 3, В)
            for (int j = 0; j < 14; j++){
                if (i == 0 and j == 0){
                    card[2][3] =sign[sign1[number]];
                    card[7][10] = sign[sign1[number]];
                    number++;
                }        
                cout << card[i][j]; // Выодит карту
        }
        cout << endl;    
        }
        for (int i = 0; i < 52; i++){// Вот начало "Будешь брать ещё"
            cout << "Будешь брать ещё?" << endl;
            
            cin >> b;
            if (b == 1){
                system("clear");
                score1 += a[i + 1];
                for (int k = 0; k < 10; k++) //Размер карты по вертикали
                {
                    for(int n = 0; n < number + 1; n++) // то сколько карт будет на экране
                    {
                        if (k != 0 and k != 10){
                            card[2][3] =sign[sign1[n]]; // запоминаем знаки всех карт и присваиваем им
                            card[7][10] = sign[sign1[n]];                    
                        }   
                        for (int j = 0; j < 14; j++){
            
                            cout << card[k][j]; //Выводим карту
                        }
                    
                        
                    } 
                    cout << endl;   
                }
                if(score1 == 21) // Победа!!!!!
                {
                    cout << "Вы выиграли набрав 21 очко!" << endl;
                    break;
                }
                if (score1 > 21) // Проигрыш (((
                {
                    cout << "Увы но ты проиграл )" << endl;
                    cout << "Твой счёт: " << score1 << endl;
                    break;
                }   
                number++; // Говорит то сколько карт уже выпало
                
                cout << " Тебе выпала " << a[i + 1] << endl;
                
            }
            if (b == 2){ // Пользователь сам захотел закончить
                cout << "Раунд закончить" << endl;
                cout << "Твой счёт: " << score1 << endl;
                break;
            }

        }
    }

    void Trips()
    {
        srand(time(0));
        int a[2]; // вторая дорожка чтолько сколко будет вырных клеток
        int b[2]; // третья и четвёртая клетка сколько будет верных дорожек
        int c[5];
        int lose;
        int move;
        int bet;
        int answ[5][3]{
        {1, 1, 1},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        };
        string square[7] = {"|---------------|",
                            "|               |",
                            "|               |",
                            "|       ?       |",
                            "|               |",
                            "|               |",
                            "|---------------|", };
        string squarelose[7] = {"|---------------|",
                            "|\033[1;41m               \033[0m|",
                            "|\033[1;41m               \033[0m|",
                            "|\033[1;41m       ?       \033[0m|", // эти каркозябры \033[0m придают цвет красный и зелёный соответсвенно
                            "|\033[1;41m               \033[0m|",
                            "|\033[1;41m               \033[0m|",
                            "|---------------|", };
        string squarewin[7] = {"|---------------|",
                            "|\033[1;42m               \033[0m|",
                            "|\033[1;42m               \033[0m|",
                            "|\033[1;42m       ?       \033[0m|",
                            "|\033[1;42m               \033[0m|",
                            "|\033[1;42m               \033[0m|",
                            "|---------------|", };

    // Заполнение а
        a[0] = rand() % 3 - 1;
        for (int i = 0; i < 3; i++) {
            a[1] = rand() % 3 + 1;
            if (i == 2 and a[1] == a[0]) {
            i = 0;
            }
        }

    // Заполенение b
        b[0] = rand() % 3 - 1;
        for (int i = 0; i < 3; i++) {
            b[1] = rand() % 3 + 1;
            // cout << b[i] << endl;
            if (i == 2 and b[1] == b[0]) {
            i = 0;
            }
        }    

    // Заполнение всех верных полей в один масив
        for (int i = 0; i < 5; i++) {
            for (int j = 0;j < 3; j++){
                if (i == 1){
                    answ[i][a[j]] = 1;
                }
                if (i == 2)
                {
                    answ[i][b[0]] = 1;
                }
                if (i == 3){
                    answ[i][b[1]] = 1;
                }
                if (i == 4){}
            }
        }

        cout << "Ваша ставка: " << endl;
        cin >> bet;

    // Отрисовка
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                for (int k = 0; k < 5; k++)
                {
                        cout << square[j];
                }
                cout << endl;
            }
        }
        cin >> c[0];
        c[0]--; // Это для того чтобы пользователю было удобно водить номер ячейки

        for (int i = 0; i < 5; i++)
        {
            if (c[i] == 3)// Множетели деняг если пользователь захотел отсановится
                {
                    cout << "Игра окончена" << endl;
                    if (i - 1 == 0 ){
                        cout << "Вы выиграли: " << bet << endl;
                    }
                    if (i - 1 == 1 ){
                        cout << "Вы выиграли: " << bet * 1.25 << endl;
                    }
                    if (i - 1 == 2 ){
                        cout << "Вы выиграли: " << bet * 2 << endl;
                    }
                    if (i - 1 == 3 ){
                        cout << "Вы выиграли: " << bet * 3 << endl;
                    }
                    
                    break;
                }
            for (int j = 0; j < 3; j++){
                
                
                if (lose != 1)

                {
                    move = i;
                    cout << "ты угодал" << endl;  
                    system("clear");
                    for (int k = 0; k < 3; k++)
                    {
                        for (int l = 0; l < 7; l++)
                        {
                            for (int m = 0; m < 5; m++)
                            {
                                if (answ[i][c[i]] == 1)
                                {
                                    if(c[m] == k and m == move){ //  Победная ячейка
                                        cout << squarewin[l];
                                    }else{
                                        cout << square[l];
                                    }
                                }else{
                                    lose = 1;
                                    if(c[m] == k and m == move){ // проигрышная ячейка
                                        cout << squarelose[l];
                                    }else{
                                        cout << square[l];
                                    }
                                }
                            }
                            cout << endl;
                        }
                    }  
                    
                }
                if (lose == 1){
                    lose = 1;
                    cout << "Ты проиграл" << endl;
                    break;
                }
                cin >> c[i + 1];
                c[i + 1]--;
                break;
            }
            if(lose == 1)
                break;

        }
    }
};
