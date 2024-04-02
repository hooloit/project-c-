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
    int c;
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


    for (int i = 0; i < 3; i++ ) {
        for(int j = 0; j < 5; j++){
            cout << answ[j][i] << ' ';
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
                if(answ[k][i] == 1){
                    cout << squarewin[j];
                }else{
                    cout << square[j];
                }
            }
            cout << "\n";
        }
    }
    // cout << square[0] << square[0] << square[0] << square[0] << square[0] << endl;
    // cout << square[1] << square[1] << square[1] << square[1] << square[1] << endl;
    // cout << square[2] << square[2] << square[2] << square[2] << square[2] << endl;
    // cout << square[3] << square[3] << square[3] << square[3] << square[3] << endl;
    // cout << square[4] << square[4] << square[4] << square[4] << square[4] << endl;
    // cout << square[5] << square[5] << square[5] << square[5] << square[5] << endl;
    // cout << square[6] << square[6] << square[6] << square[6] << square[6] << endl;
    // cout << square[] << square[0] << square[0] << square[0] << square[0] << endl;
                            	   	   	   	   	   	

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
