#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    int a [2];
    int answ[5][3]{
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    };
    a[0] = (rand() % 3 + 1) - 1;
    a[1] = (rand() % 3 + 1) - 1;
    
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0;j < 3; j++){
            if (i == 0 or i == 1){
                answ[i][a[0]] = 1;
                answ[i][a[1]] = 1;

            }
            if (i == 2 or i == 3)
            {
                cout << "дорожка 3 и 4" << endl;
            }
            if (i == 4){
                cout << "дорожка 5" << endl;
            }
            

        }
    }
        cout << a[0] << endl;
        cout << a[1] << endl;
    for (int i = 0; i < 3; i++){
        cout << answ[0][i] << endl;

    }
}