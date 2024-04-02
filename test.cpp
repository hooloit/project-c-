#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    int a[2];
    int b[2];
    int c;
    int answ[5][3]{
    {1, 1, 1},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    };
    srand(time(0));
    a[0] = rand() % 3 - 1;
    for (int i = 0; i < 3; i++) {
        a[1] = rand() % 3;
        cout << a[1] << endl;
        if (i == 2 and a[1] == a[0]) {
        cout << "AXAXAX" << endl;
        i = 0;
        }
    }
    b[0] = rand() % 3 - 1;
    for (int i = 0; i < 3; i++) {
        b[1] = rand() % 3;
        cout << a[1] << endl;
        if (i == 2 and a[1] == a[0]) {
        cout << "AXAXAX" << endl;
        i = 0;
        }
    }    
    c = rand() % 3;
    for (int i = 0; i < 5; i++) {
        for (int j = 0;j < 3; j++){
            if (i == 1){
                answ[i][a[1]] = 1;
                // answ[i][a[0]] = 1;
            }
            if (i == 2)
            {
                answ[i][b[0]] = 1;
            }
            if (i == 3){
                answ[i][b[1]] = 1;
            }
            if (i == 4){

            }
            

        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++) {
            cout << answ[j][i] << ' ';
        }
        cout << endl;    
    }
}