#include <iostream>
#include <iomanip>
#include <fstream> 
#include <iomanip>
using namespace std;

void print_dialog_window()
{
    int base;
    fstream file("/home/ilnar/prog/c++/game/asciiart/coutart.txt");
    string a;
    if(file.is_open()){
        // while (getline(file, a))
        // {
        //     cout << '|' << setw(270) <<  a << '|'<< endl;    
        // }

        for(int i = 0; i < 61; i++)
        {
            if (i == 0)
            {
                for(int i = 0; i < 272; i++)
                {
                    cout << '-';
                }
                cout << endl;
            }
            if (i == 60)
            {
                for(int i = 0; i < 272; i++)
                {
                    cout << '-';
                }
                cout << endl;
                break;
            }
            if (i == 38)
            {
                cout << '|';
                for (int i = 0; i < 179; i++)
                {
                    cout << '-';
                }
                cout << '|' << a << '|' << endl;
            }
            getline(file, a);
            cout << '|' << setw(180) << '|' <<  a << '|'<< endl;
        }
    }
    file.close();

};
void test()
    {
int base;
    fstream file("/home/ilnar/prog/c++/game/asciiart/test.txt");
    string a;
    if(file.is_open()){
        // while (getline(file, a))
        // {
        //     cout << '|' << setw(270) <<  a << '|'<< endl;    
        // }

        for(int i = 0; i < 62; i++)
        {
            getline(file, a);
            cout << a << endl;
        }
    }
    file.close();

    }


int main() {
    // print_dialog_window();
    test();
}
// Источник: https://uchet-jkh.ru/i/cto-takoe-iomanip-i-kak-ego-ispolzovat