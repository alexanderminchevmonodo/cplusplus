#include <iostream>
#include <windows.h>
using namespace std;

//Colors

int main ()
{

    HANDLE my_console = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(my_console,1);
    cout << "C++";



    return 0;
}



