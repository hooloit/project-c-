#include <iostream>
#include <random>
#include <string>
#include <unistd.h>
// #include <stdlib.h>
#include <cstdlib>

using namespace std;


void  Roulette(int round1[])
{
    string a[20] = {"\033[1;32m 00 \033[0m","\033[1;31m 1 \033[0m", "\033[1;34m 2 \033[0m", 
                    "\033[1;31m 3 \033[0m", "\033[1;31m 4 \033[0m", "\033[1;31m 5 \033[0m", 
                    "\033[1;31m 6 \033[0m", "\033[1;31m 7 \033[0m", "\033[1;31m 8 \033[0m",
                    "\033[1;31m 9 \033[0m", "\033[1;31m 10 \033[0m", "\033[1;31m 11 \033[0m",
                    "\033[1;31m 12 \033[0m", "\033[1;31m 13 \033[0m", "\033[1;31m 14 \033[0m",
                    "\033[1;31m 15 \033[0m", "\033[1;31m 16 \033[0m", "\033[1;31m 17 \033[0m",
                    "\033[1;31m 18 \033[0m", "\033[1;31m 0 \033[0m"};
    for(int i = 0; i < 20; i++){
        for (int j = 0; j < 1; j++){
            cout << round1[i] << endl;
            
            sleep(2);
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                        3    " << endl;
            cout << "                  ^                " << endl;
            cout << " 13               |              4 " << endl;
            cout << "                  |                " << endl;
            cout << "14                |               5" << endl;
            cout << "                  0                " << endl;
            cout << " 15                              6 " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl; 
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            cout << "                 00    $            " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                ^       3    " << endl;
            cout << "                    _/             " << endl;
            cout << " 13               _/             4 " << endl;
            cout << "                 /                 " << endl;
            cout << "14               0                5" << endl;
            cout << "                                   " << endl;
            cout << " 15                              6 " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 1){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1  $        " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                   ^    3    " << endl;
            cout << "                      __/          " << endl;
            cout << " 13                  /           4 " << endl;
            cout << "                    /              " << endl;
            cout << "14                 0              5" << endl;
            cout << "                                   " << endl;
            cout << " 15                              6 " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 2){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                             $     " << endl;
            cout << "    12                       3     " << endl;
            cout << "                          __^      " << endl;
            cout << " 13                   __ /       4 " << endl;
            cout << "                  __ /             " << endl;
            cout << "14              /                 5" << endl;
            cout << "                0                  " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 3){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                $  " << endl;
            cout << " 13                      _ >    4  " << endl;
            cout << "                    __ /           " << endl;
            cout << "14                0               5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 4){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                  $" << endl;
            cout << "14                 0------>       5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                       " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 5){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                  " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0_             5" << endl;
            cout << "                     \'__           " << endl;
            cout << " 15                      \'_ >  6  " << endl;
            cout << "                                $   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 6){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }    
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0              5" << endl;
            cout << "                   \'_             " << endl;
            cout << " 15                   \'__      6  " << endl;
            cout << "                          |        " << endl;
            cout << "    16                    >  7     " << endl;
            cout << "                             $     " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 7){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                             *     " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0              5" << endl;
            cout << "                   \'_             " << endl;
            cout << " 15                   \'_       6  " << endl;
            cout << "                         \'        " << endl;
            cout << "    16                   ⬇   7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9  $         " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 8){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }    cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                             *     " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0              5" << endl;
            cout << "                    \'             " << endl;
            cout << " 15                  \'         6  " << endl;
            cout << "                      \'           " << endl;
            cout << "    16                 |     7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0    $           " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 9){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3); 
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                0               5" << endl;
            cout << "                  |                " << endl;
            cout << " 15               |             6  " << endl;
            cout << "                  |                " << endl;
            cout << "    16            *          7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 0){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0              5" << endl;
            cout << "                  /                " << endl;
            cout << " 15              /              6  " << endl;
            cout << "                /                  " << endl;
            cout << "    16         |             7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "              $    0               " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 18){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0              5" << endl;
            cout << "                 _/                " << endl;
            cout << " 15           __/               6  " << endl;
            cout << "             /                     " << endl;
            cout << "    16      /                7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "          $   18        9          " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 17){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0              5" << endl;
            cout << "                __/                " << endl;
            cout << " 15         __/                 6  " << endl;
            cout << "        <--/                       " << endl;
            cout << "    16                       7     " << endl;
            cout << "     $                             " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 16){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                   " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << "                                   " << endl;
            cout << "14                 0              5" << endl;
            cout << "                 __/                " << endl;
            cout << " 15       <____/               6  " << endl;
            cout << "  $                                " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 5){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                                  " << endl;
            cout << "    12                       3     " << endl;
            cout << "                                   " << endl;
            cout << " 13                             4  " << endl;
            cout << " $                                 " << endl;
            cout << "14         <------0               5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 14){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                             *     " << endl;
            cout << "    12                       3     " << endl;
            cout << "  $                                 " << endl;
            cout << " 13     <--                      4  " << endl;
            cout << "           \'__                     $" << endl;
            cout << "14            \'___0              5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 13){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "     $                        *     " << endl;
            cout << "    12                       3     " << endl;
            cout << "      ^                            " << endl;
            cout << " 13    \'--                     4  " << endl;
            cout << "           \'--                    $" << endl;
            cout << "14            \'---0              5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 12){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "         $   10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                             *     " << endl;
            cout << "    12   ^                   3     " << endl;
            cout << "          \'-                       " << endl;
            cout << " 13          \'--               4  " << endl;
            cout << "                 \'                $" << endl;
            cout << "14                \'0              5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 11){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "              $   00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "              ^               *     " << endl;
            cout << "    12        |              3     " << endl;
            cout << "               \'                  " << endl;
            cout << " 13             \'              4  " << endl;
            cout << "                 \'                " << endl;
            cout << "14                 0              5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round1[i] == 10){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
            cout << "                 00                " << endl;
            cout << "             10        1           " << endl;
            cout << "        11                2        " << endl;
            cout << "                  ^               " << endl;
            cout << "    12            |          3     " << endl;
            cout << "                  |                " << endl;
            cout << " 13               |             4  " << endl;
            cout << "                  |                " << endl;
            cout << "14                0               5" << endl;
            cout << "                                   " << endl;
            cout << " 15                             6  " << endl;
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            if (round1[1] == 21){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
    }
    }

};

void ways()
{

};

int main()
{
// global var
    int balace = 1000;
    int bid;


//Roulette

    int num[19];
    int random1[50]; 
    int round[20];
    int zero[2] = {1, 2};
    int a;
    int b;
    int c;
    int d;
    for (int i = 0; i < 19; i++)
    {
        num[i] = i;
    }

    for(int i = 0; i < 51; i++)
    {
        random1[i] = i;
        cout << random1[i] << "\t";
    }
    srand(time(0));
    a = rand() % 50 + 1 ;
    c = rand() % 20 + 1;
    d = rand() % 2 +1;
    for (int i = 0; i < 5; i++)
        b = rand() % 50 +1;

    for (int i=0; i < 20; ++i)
    {
        round[i] = rand() % 20 + 1;
	}
    if(a == b)
    {
        if(zero[0] == d){
        round[c] = 0;
        }else{
            round[c] = 21;
        }

    }
    cout << "Здравствуйте! В данный момент запустилась игра Рулетка" << endl;
    cout << "Какую ставку вы хотите поставить? \n" << "Ваш баланс: " << balace <<  endl;
    cin >> bid;
    if(bid > 0){
        cout << "Ваша ставка в размере:" << bid << " внутриигров0й валиты принята" << endl;
    }else {
        cout << "Похоже вы поставили ничего. В таком случает вы не можете играть" << endl;
     }
    Roulette(round);


//Twenty one



//Я не помню как нахывается но да
}