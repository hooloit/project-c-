#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int a[52];
    int b;
    int score1;
    int score2;
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
    for (int i = 0; i < 52; i++)
    {
        a[i] = rand() % 13 + 1;
        for(int j = 0; j < 13; j++){
            for (int k = 0; k < 4; k++){
                if (a[i] == deck[j][k]){
                    deck[j][k] = 0;
                }
            }
        }
    }
    // a[0] = rand() % 13 + 1;
    // for(int k = 0; k < 4; k++){
    //     for(int i = 0; i < 13; i++){
    //         for (int j = 0; j < 4; j++)
    //             if (a[i] - 1 == deck[i][j]){
    //                 deck[i][j] = 0;
    //                 a[i] = rand() % 13 + 1;
    //                 break;
    //             }
    //         // cout << a[i] << endl;
    //     }
    // }
    
    for(int i = 0; i < 52; i++)
    {
        cout << a[i] << endl;
    }
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << deck[i][j] << ' ';
        }
        cout << endl;
    }
    
    }
