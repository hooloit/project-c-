#include <string>
#include <fstream>
#include <iostream>
#include <format>
#include <sys/ioctl.h> //ioctl() and TIOCGWINSZ
#include <unistd.h> // for STDOUT_FILENO

using namespace std;

int main() // Максимально высота 61
{
    srand(time(0));
    int round;
    for(int i = 0; i < 50; i++)
    {
        round = rand()  % 22;
        cout << round << endl;
    }    
}