#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <unistd.h>
#include <termios.h>
#include <ctime>
#include <fcntl.h>
#include <algorithm>
#include <map>
#include <cmath>
#include <tuple>
#include <thread>
#include <chrono>
#include <sys/ioctl.h>
#include <iomanip>

using namespace std;

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#define CLEAR u8"\033[2J\033[1;1H" /* clear console */

class Menu
{
private:

public:
        void showMenu()
        {
            int a;
            int b;
            struct winsize w;
            ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
            cout << w.ws_row << endl;
            a = w.ws_row  / 2 - 20 ;
            b = w.ws_col / 2 - 15;
            system("clear");
            for (int i = 0; i < a; i++)
            {
                cout << endl;
            }
            // cout << CLEAR;
            cout << setw(b) << BOLDGREEN << "Приветсвую вас в" << CYAN << " Enter the casino" << RESET << endl;
            cout << setw(b) << "ass" << endl;
            cout << setw(b) << "1. " << YELLOW << "TwentyOne" << RESET << endl;
            cout << setw(b) << "2. " << BOLDCYAN << "Trips" << RESET << endl;
            cout << setw(b) << "3. " << BOLDBLACK << "Rulet" << RESET << endl;
            cout << setw(b) <<"4. " << BOLDRED << "Exit" << RESET << endl;
        }
};
