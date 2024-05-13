#include <math.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
void TwentyOne()
{
    
    int a[42];
    int b;
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

    for(int i = 0; i < 52; i++){
        a[i] = rand() % 13 + 1;
        // cout << a[i] << endl;
    }

    score1 = a[0];
    for(int i = 0; i < 13; i++){
        for (int j = 0; j < 4; j++)
            if (a[0] == deck[i][j]){
                deck[i][j] = 0;
            }
    }
    cout << "Тебе выпала: " << a[0] << endl;
    for(int i = 0; i < 42; i++)
    {
        sign1[i] = a[i] - 1;
    }

    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 14; j++){
            if (i == 0 and j == 0){
                card[2][3] =sign[sign1[number]];
                card[7][10] = sign[sign1[number]];
                number++;
            }        
            cout << card[i][j];
    }
    cout << endl;    
    // cout << sign1[0] << endl;
    }
    for (int i = 0; i < 52; i++){
        cout << "Будешь брать ещё?" << endl;
        
        cin >> b;
        if (b == 1){
            system("clear");
            score1 += a[i + 1];
            for (int k = 0; k < 10; k++)
            {
                for(int n = 0; n < number + 1; n++)
                {
                    if (k != 0 and k != 10){
                        card[2][3] =sign[sign1[n]];
                        card[7][10] = sign[sign1[n]];                    
                    }   
                    for (int j = 0; j < 14; j++){
          
                        cout << card[k][j];
                    }
                
                    
                } 
                cout << endl;   
            }
            if(score1 == 21)
            {
                cout << "Вы выиграли набрав 21 очко!" << endl;
                break;
            }
            if (score1 > 21)
            {
                cout << "Увы но ты проиграл )" << endl;
                cout << "Твой счёт: " << score1 << endl;
                break;
            }   
            number++;
            
            cout << " Тебе выпала " << a[i + 1] << endl;
            
        }
        if (b == 2){
            cout << "Раунд закончить" << endl;
            cout << "Твой счёт: " << score1 << endl;
            break;
        }

    }
}


// int main()
// {
//     int a[42];
//     int b;
//     int score1;
//     int score2;
//     int number = 0;
//     int deck[13][4]{
//         {1, 1, 1, 1},
//         {2, 2, 2, 2},
//         {3, 3, 3, 3},
//         {4, 4, 4, 4},
//         {5, 5, 5, 5},
//         {6, 6, 6, 6},
//         {7, 7, 7, 7},
//         {8, 8, 8, 8},
//         {9, 9, 9, 9},
//         {10, 10, 10, 10},
//         {11, 11, 11, 11},          
//         {12, 12, 12, 12},
//         {13, 13, 13, 13},
//     };

//     char sign[14] {'T', '2', '3', '4', '5', '6', '7', '8', '9', '1', 'B', 
//                     'D', 'K'};
//     int sign1[42];
//     char card[10][15]{
//         "|------------|",
//         "|            |",
//         "|  ?         |",
//         "|            |",
//         "|            |",
//         "|            |",
//         "|            |",
//         "|         ?  |",
//         "|            |",
//         "|------------|",

//     };
//     srand(time(0));

//     for(int i = 0; i < 52; i++){
//         a[i] = rand() % 13 + 1;
//         // cout << a[i] << endl;
//     }

//     score1 = a[0];
//     for(int i = 0; i < 13; i++){
//         for (int j = 0; j < 4; j++)
//             if (a[0] == deck[i][j]){
//                 deck[i][j] = 0;
//             }
//     }
//     cout << "Тебе выпала: " << a[0] << endl;
//     for(int i = 0; i < 42; i++)
//     {
//         sign1[i] = a[i] - 1;
//     }

//     for(int i = 0; i < 10; i++){
//         for (int j = 0; j < 14; j++){
//             if (i == 0 and j == 0){
//                 card[2][3] =sign[sign1[number]];
//                 card[7][10] = sign[sign1[number]];
//                 number++;
//             }        
//             cout << card[i][j];
//     }
//     cout << endl;    
//     // cout << sign1[0] << endl;
//     }
//     for (int i = 0; i < 52; i++){
//         cout << "Будешь брать ещё?" << endl;
        
//         cin >> b;
//         if (b == 1){
//             system("clear");
//             score1 += a[i + 1];
//             for (int k = 0; k < 10; k++)
//             {
//                 for(int n = 0; n < number + 1; n++)
//                 {
//                     if (k != 0 and k != 10){
//                         card[2][3] =sign[sign1[n]];
//                         card[7][10] = sign[sign1[n]];                    
//                     }   
//                     for (int j = 0; j < 14; j++){
          
//                         cout << card[k][j];
//                     }
                
                    
//                 } 
//                 cout << endl;   
//             }
//             if(score1 == 21)
//             {
//                 cout << "Вы выиграли набрав 21 очко!" << endl;
//                 break;
//             }
//             if (score1 > 21)
//             {
//                 cout << "Увы но ты проиграл )" << endl;
//                 cout << "Твой счёт: " << score1 << endl;
//                 break;
//             }   
//             number++;
            
//             cout << " Тебе выпала " << a[i + 1] << endl;
            
//         }
//         if (b == 2){
//             cout << "Раунд закончить" << endl;
//             cout << "Твой счёт: " << score1 << endl;
//             break;
//         }

//     }


//     }
