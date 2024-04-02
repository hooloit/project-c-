#include  <iostream>
#include <string>
#include <ctime>

using namespace std;


int main()
{

    // string square[2] = {"",
    //                     ""}; 
    srand(time(0));
    int a;
    int answ[5][3]{
    {0, 0, 0},
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

    for (int i = 0; i < 5; i++) {
        for (int j = 0;j < 3; j++){
            if (i == 0 or i == 1){
                cout << "дорожка 1 и 2" << endl;
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


    for (int i = 0; i < 7; i++ ) {
        cout << squarewin[i] << endl;
    }
    // cout << squarelose[3] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << square[j];
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
