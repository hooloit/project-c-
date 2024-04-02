#include  <iostream>
#include <string>

using namespace std;


int main()
{

    // string square[2] = {"",
    //                     ""}; 

    string square[7] = {"|---------------|",
                        "|               |",
                        "|               |",
                        "|       ?       |",
                        "|               |",
                        "|               |",
                        "|---------------|", };


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 7; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << square[j];
            }
            cout << "\n";
        }
        cout << "\n";
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
