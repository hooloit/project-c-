#include  <iostream>
#include <string>
#include <ctime>

using namespace std;


int main()
{

    // string square[2] = {"",
    //                     ""}; 
    srand(time(0));
    int a[2];
    int b[2];
    int c[5];
    int lose;
    int move[5];
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
                        "|\033[1;41m       ?       \033[0m|",
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
    // c = rand() % 3;
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
            if (i == 4){}
        }
    }


    for (int i = 0; i < 3; i++ ) {
        for(int j = 0; j < 5; j++){
            cout << '[' << i << "] " << answ[j][i] << ' ';
        }
        cout << endl;
    }
    // cout << squarelose[3] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                // if(answ[k][i] == 1){
                //     cout << squarewin[j];
                // }else{
                    cout << square[j];
                // }
            }
            cout << "\n";
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++){
            cin >> c[i];
            c[i] = c[i] - 1;
            if (answ[i][c[i]] == 1)

            {
                move[i] = j;
                cout << "ты угодал" << endl;  
                for (int k = 0; k < 3; k++)
                {
                    for (int l = 0; l < 7; l++)
                    {
                        for (int m = 0; m < 5; m++)
                        {
                            if(c[m] == k and m == move[m]){
                                cout << squarewin[l];
                            }else{
                                cout << square[l];
                            }
                        }
                        cout << "\n";
                    }
                }  
                break;
            }else{
                lose = 1;
                break;
            }
        }
        if(lose == 1)
            break;

    }
                            	   	   	   	   	   	

    // cout << "|---------------||---------------||---------------||---------------||---------------|" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|       ?       ||       ?       ||       ?       ||       ?       ||       ?       |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|---------------||---------------||---------------||---------------||---------------|" << endl;
    // cout << "|---------------||---------------||---------------||---------------||---------------|" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|       ?       ||       ?       ||      ?        ||       ?       ||       ?       |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|---------------||---------------||---------------||---------------||---------------|" << endl;
    // cout << "|---------------||---------------||---------------||---------------||---------------|" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|      ?        ||       ?       ||       ?       ||       ?       ||       ?       |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|               ||               ||               ||               ||               |" << endl;
    // cout << "|---------------||---------------||---------------||---------------||---------------|" << endl;
    
    cout << "\033[1;42mbold red text\033[0m\n" << endl;
    cout << "\033[1;41m        \033[0m\n" << endl;
}
