#include <iostream>

using namespace std;
 

 
int main(){
    string a[20] = {"\033[1;32m 00 \033[0m","\033[1;31m 1 \033[0m", "\033[1;34m 2 \033[0m", 
                    "\033[1;31m 3 \033[0m", "\033[1;34m 4 \033[0m", "\033[1;31m 5 \033[0m", 
                    "\033[1;34m 6 \033[0m", "\033[1;31m 7 \033[0m", "\033[1;34m 8 \033[0m",
                    "\033[1;31m 9 \033[0m", "\033[1;34m 10 \033[0m", "\033[1;31m 11 \033[0m",
                    "\033[1;34m 12 \033[0m", "\033[1;31m 13 \033[0m", "\033[1;34m 14 \033[0m",
                    "\033[1;31m 15 \033[0m", "\033[1;34m 16 \033[0m", "\033[1;31m 17 \033[0m",
                    "\033[1;34m 18 \033[0m", "\033[1;32m 0 \033[0m"};


    string A1[3] = {"                 \033[1;32m 00 \033[0m                                  ",
                    "                 \033[1;32m 00 \033[0m   $                              ",
                    "             $   \033[1;32m 00 \033[0m                                  "};
    string A2[3] = {"           \033[1;34m 10 \033[0m        \033[1;31m 1 \033[0m            ",
                    "           \033[1;34m 10 \033[0m        \033[1;31m 1 \033[0m   $        ",
                    "        $  \033[1;34m 10 \033[0m        \033[1;31m 1 \033[0m            "};
    string A3 = "      \033[1;31m 11 \033[0m                  \033[1;34m 2 \033[0m       ";
    string A4 = "                                                                        ";
    string A5[6] = {"   \033[1;34m 12 \033[0m                        \033[1;31m 3 \033[0m    ",
                    "   \033[1;34m 12 \033[0m                ^       \033[1;31m 3 \033[0m    ",
                    "   \033[1;34m 12 \033[0m                   ^    \033[1;31m 3 \033[0m    ",
                    "   \033[1;34m 12 \033[0m   ^                    \033[1;31m 3 \033[0m    ",
                    "   \033[1;34m 12 \033[0m        |               \033[1;31m 3 \033[0m    ",
                    "   \033[1;34m 12 \033[0m            |           \033[1;31m 3 \033[0m    "};
    string A6 = "                  ^                                                     ";
    string A7[11] = {" \033[1;31m 13 \033[0m             |                \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m               _/             \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m                  /           \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m                      /       \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m                        ->    \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m     <--                      \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m    \'--                      \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m          \'--                \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m             \'               \033[1;34m 4 \033[0m  ",
                     " \033[1;31m 13 \033[0m               |              \033[1;34m 4 \033[0m  ",
                    " \033[1;31m 13 \033[0m                              \033[1;34m 4 \033[0m "};
    string A8 = "                  |                                                     ";
    string A9[9] = {"\033[1;34m 14 \033[0m                |               \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m              0                 \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m              /                 \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m                 0------>       \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m                 0_             \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m         <------0               \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m            \'___0              \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m            \'---0              \033[1;31m 5 \033[0m",
                    "\033[1;34m 14 \033[0m               \'0              \033[1;31m 5 \033[0m"};
    string A10 = "                                                                       ";
    string A11[10] = {" \033[1;31m 15 \033[0m                              \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m                      \'_ >  \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m                   \'__      \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m                   \'_       \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m                  \'         \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m               |             \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m              /              \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m           __/               \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m         __/                 \033[1;34m 6 \033[0m ",
                      " \033[1;31m 15 \033[0m       <____/               cd ..\033[1;34m 6 \033[0m ",};
    string A12 = "                                                                       ";
    string A13[7] = {"   \033[1;34m 16 \033[0m                       \033[1;31m 7 \033[0m    ",
                     "   \033[1;34m 16 \033[0m                    >  \033[1;31m 7 \033[0m    ",
                     "   \033[1;34m 16 \033[0m                   ⬇   \033[1;31m 7 \033[0m    ",
                     "   \033[1;34m 16 \033[0m                 |     \033[1;31m 7 \033[0m    ",
                     "   \033[1;34m 16 \033[0m            *          \033[1;31m 7 \033[0m    ",
                     "   \033[1;34m 16 \033[0m         |             \033[1;31m 7 \033[0m    ",
                     "   \033[1;34m 16 \033[0m      /                \033[1;31m 7 \033[0m    ",};
    string A14 = "                                                                       ";
    string A15[3] = {"       \033[1;31m 17 \033[0m              \033[1;34m 8 \033[0m         "};
    string A16 = "            \033[1;34m 18 \033[0m      \033[1;31m 9 \033[0m            ";
    string A17 = "                 \033[1;32m 0 \033[0m                                  ";
    // string A17 = 
    // string A19 =
    // string A14 = 
    // string A15 = 
    // string A16 = 
    // string A17 = 
    // string A18 = 
    // string A19 =  

    cout << A1[1] << endl;
    cout << A2[2] << endl;
    cout << A3 << endl;
    cout << A4 << endl;
    cout << A5[0] << endl;
    cout << A6 << endl;
    cout << A7 << endl;
    cout << A8 << endl;
    cout << A9 << endl;
    cout << A10 << endl;
    cout << A11 << endl;
    cout << A12 << endl;
    cout << A13 << endl;
    cout << A14 << endl;
    cout << A15 << endl;
    cout << A16 << endl;
    cout << A17 << endl;

    // cout << A[0]<< endl;
            cout << "                 " << a[0] << "                             " << endl;
            cout << "           " << a[10] <<"        " << a[1] <<"              " << endl;
            cout << "       " << a[11] << "                " << a[2] << "        " << endl;
            cout << "                                                            " << endl;
            cout << "   " << a[12] << "                        " << a[3] << "    " << endl;
            cout << "                  ^                                         " << endl;
            cout << " " << a[13] << "             |              " << a[4] <<"   " << endl;
            cout << "                  |                                         " << endl;
            cout << a[14] << "              |                " << a[5] << endl;
            cout << "                  0                                         " << endl;
            cout << " " << a[15] << "                            " << a[6] << "  " << endl;
            cout << "                                                            " << endl;
            cout << "   " << a[16] << "                       " <<a[7] << "      " << endl;
            cout << "                                                            " << endl;
            cout << "       " << a[17] <<"              " << a[8] <<"            " << endl;
            cout << "            " << a[18] <<"      " << a[9] <<"               " << endl; 
            cout << "                 " << a[19] << "                            " << endl;






 
    return 0;
}