#include <stdio.h>
#include <windows.h>
#include <conio.h>
void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void draw ship(int x, int y)
{
    gotoxy(x, y);
    printf(" <-0-> ");
}
void erase ship(int x, int y)
{
    gotoxy(x, y);
    printf("       ");
}
int main()
{
    char ch = ' ';
    int x = 38, y = 20;
    draw_ship(x, y);
    do
    {
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 'a')
            {
                draw_ship(--x, y);
            }
            if (ch == 'd')
            {
                draw_ship(++x, y);
            }
            if (ch == 'w')
            {
                erase_ship(x,y);
                draw_ship(x, --y);
            }
            if (ch == 's')
            {
                erase_ship(x,y);
                draw_ship(x, ++y);
            }
            fflush(stdin);
        }
        Sleep(100);
    } while (ch != 'x');
    return 0;
}
