#include <iostream>
#include <random>
#include <string>
#include <unistd.h>
// #include <stdlib.h>
#include <cstdlib>

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


using namespace std;


void  Roulette(int round[])
{
    string a[20] = {"\033[1;32m 00 \033[0m","\033[1;31m 1 \033[0m", "\033[1;34m 2 \033[0m", 
                    "\033[1;31m 3 \033[0m", "\033[1;31m 4 \033[0m", "\033[1;31m 5 \033[0m", 
                    "\033[1;31m 6 \033[0m", "\033[1;31m 7 \033[0m", "\033[1;31m 8 \033[0m",
                    "\033[1;31m 9 \033[0m", "\033[1;31m 10 \033[0m", "\033[1;31m 11 \033[0m",
                    "\033[1;31m 12 \033[0m", "\033[1;31m 13 \033[0m", "\033[1;31m 14 \033[0m",
                    "\033[1;31m 15 \033[0m", "\033[1;31m 16 \033[0m", "\033[1;31m 17 \033[0m",
                    "\033[1;31m 18 \033[0m", "\033[1;31m 0 \033[0m"};


};

void ways()
{

};

int main()
{
// global var


//Roulette
    int balace = 1000;
    int bid;
    int round;

    srand(time(0));
    round = rand()  % 22;

    cout << "Здравствуйте! В данный момент запустилась игра Рулетка" << endl;
    cout << "Какую ставку вы хотите поставить? \n" << "Ваш баланс: " << balace <<  endl;
    cin >> bid;
    if(bid > 0){
        cout << "Ваша ставка в размере:" << bid << " принята" << endl;
        for (int i = 0; i < 1; i++){
            // cout << round << endl;
            
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
            if(round == 1){
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
            if(round == 2){
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
            if(round == 3){
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
            if(round == 4){
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
            cout << "                                   " << endl;
            cout << "    16                       7     " << endl;
            cout << "                                   " << endl;
            cout << "         17               8        " << endl;
            cout << "             18        9           " << endl;
            cout << "                  0                " << endl;
            sleep(1);
            system("clear");
            if(round == 5){
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
            if(round == 6){
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
            if(round == 7){
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
            if(round == 8){
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
            if(round == 9){
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
            if(round == 0){
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
            if(round == 18){
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
            if(round == 17){
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
            if(round == 16){
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
            if(round == 15){
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
            if(round == 14){
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
            if(round == 13){
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
            if(round == 12){
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
            if(round == 11){
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
            if(round == 10){
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
            if (round == 21){
                cout << "АХАХАХАХАХАХАХА";
                sleep(3);
                break;
            }
    }
    
    }else {
        cout << "Похоже вы поставили ничего. В таком случает вы не можете играть" << endl;
    }

        
    


//Twenty one



//Я не помню как нахывается но да
}