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

#include "test21.cpp"
#include "testT.cpp"

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


// здесь будем хранить предыдущие настройки
struct termios saved_attributes;

// метод для установки в терминале предыдущих настроек
void reset_input_mode (void)
{
    tcsetattr (STDIN_FILENO, TCSANOW, &saved_attributes);
}

// метод установки новых настроек терминала
void set_input_mode (void)
{
    struct termios tattr; // структура для новых настроек

    if (!isatty (STDIN_FILENO)) // проверка, что переопределяем именно терминал
    {
        fprintf (stderr, "Not a terminal.\n"); // вывод ошибки
        exit (EXIT_FAILURE); // выход из программы
    }

    tcgetattr (STDIN_FILENO, &saved_attributes); // получаем настройки терминала и заполняем saved_attributes
    atexit (reset_input_mode); // наш метод возвращения настроек будет вызываться при успешном завершении программы

    tcgetattr (STDIN_FILENO, &tattr); // получаем текущие настройки терминала и заполняем tattr
    tattr.c_lflag &= ~(ICANON|ECHO); // убираем канонический ввод и вывод символов
    tattr.c_cc[VMIN] = 2; // Минимальное количество символов для неканонического ввода
    tattr.c_cc[VTIME] = 0; // Время ожидания в миллисекундах для неканонического ввода
    tcsetattr (STDIN_FILENO, TCSAFLUSH, &tattr); // установка новых настроек терминала
}

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
            cout << setw(b) << "1. " << YELLOW << "Trips" << RESET << endl;
            cout << setw(b) << "2. " << BOLDCYAN << "TwenryOne" << RESET << endl;
            cout << setw(b) <<"3. " << BOLDRED << "Exit" << RESET << endl;
        }

int main() {
    showMenu();
    set_input_mode();
    char c;
    uint8_t difficulty = {0};
    read (STDIN_FILENO, &c, 1); // читаем 1 символ и записываем в переменную char c
    cout << c << endl;
    if (c == '2') {
        system("clear");
        TwentyOne();
        cout << "AXAXAXAX" << endl;
    }
    if (c == '1')
    {
        system("clear");
        Trips();
        cout << "AXAXAXAX" << endl;
    }
	return 0;
}