#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    int Map[10][10] =
    {
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1}

    };
    
    for (int Y = 0; Y < 10; ++Y)
    {
        for (int X = 0; X < 10; ++X)
        {
             if (Map[Y], [X] = 1)
            {
                cout << "#" << " ";
            }
            else if (Map[Y], [X] = 0)
            {
                cout << " " << " ";
            }
            
        }
        cout << '\n';
    }

}


struct FVector2D
{
    int X;
    int Y;
};

void SetLocation(FVector2D NewLocation);


int main()

{
    bool bRunning = true;
    FVector2D PlayerPosition;
    PlayerPosition.X = 0;
    PlayerPosition.Y = 0;

    while (bRunning)
    {
        int KeyCode = _getch();

        switch (KeyCode)
        {
        case 'w':
        case 'W':
            PlayerPosition.Y--;
            break;
        case 's':
        case 'S':
            PlayerPosition.Y++;
            break;
        case 'a':
        case 'A':
            PlayerPosition.X--;
            break;
        case 'd':
        case 'D':
            PlayerPosition.X++;
            break;
        case 27:
            bRunning = false;
            break;

        }

        PlayerPosition.X = PlayerPosition.X < 0 ? 0 : PlayerPosition.X;
        PlayerPosition.Y = PlayerPosition.Y < 0 ? 0 : PlayerPosition.Y;
        PlayerPosition.X = PlayerPosition.X > 51 ? 51 : PlayerPosition.X;
        PlayerPosition.Y = PlayerPosition.Y > 14 ? 14 : PlayerPosition.Y;

        system("cls");

        SetLocation(PlayerPosition);
        cout << "P";
    }


    return 0;
}


void SetLocation(FVector2D NewLocation)
{
    COORD Cur;
    Cur.X = NewLocation.X;
    Cur.Y = NewLocation.Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

