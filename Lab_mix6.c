#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>


COORD coord = {0, 0}


double rad(double z);
double SINE(double u, double z);
void setColor(int code);
void clrscr();

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    
    return 0;
}

double rad(double z)
{
    double ans;
    ans = z * M_PI / 180;
    return (ans);
}

double SINE(double u, double z)
{
    double C = 1;
    double radian = rad(z);
    double sine = sin(u * radian) * C;

    return sine;
}

void setColor(int code)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, code);
}

void clrscr()
{
    system("cls");
}