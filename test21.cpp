#include <math.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int a[42];
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

    char sign[14] {'T', '2', '3', '4', '5', '6', '7', '8', '9', '1', 'B', 
                    'D', 'K'};
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

    for(int i = 0; i < 42; i++){
        a[i] = rand() % 13 + 1;
        // cout << a[i] << endl;
    }

        score1 = a[0];
        cout << "Тебе выпала: " << a[0] << endl;
        for(int i = 0; i < 10; i++){
            for (int j = 0; j < 14; j++){
                if (j == 3 and i == 2){
                    card[i][j] = sign[a[0]] - 1;
                }
                if (j == 10 and i == 7){
                    card[i][j] = sign[a[0] - 1];
                }
                cout << card[i][j];
        }
        cout << endl;    
    }
    for (int i = 0; i < 41; i++){
        cout << "Будешь брать ещё?" << endl;
        cin >> b;
        if (b == 1){
            score1 += a[i + 1];
            if (score1 > 21){
                cout << "Увы но ты проиграл )" << endl;
                cout << "Твой счёт: " << score1 << endl;
                break;
            }
            for(int k = 0; k < 10; k++){
                for (int j = 0; j < 14; j++){
                    if (j == 3 and k == 2){
                        card[k][j] = sign[a[i + 1] - 1];
                    }
                    if (j == 10 and k == 7){
                        card[k][j] = sign[a[i + 1] - 1];
                    }
                    cout << card[k][j];
                }
                cout << endl;    
            }   
            cout << " Тебе выпала " << a[i + 1] << endl;
            
        }
        if (b == 2){
            cout << "Раунд закончить" << endl;
            cout << "Твой счёт: " << score1 << endl;
            break;
        }

    }



}