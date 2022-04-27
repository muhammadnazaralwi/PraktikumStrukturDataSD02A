#include <iostream>
using namespace std;

int main()
{
    int board[4][3] = {{2, 3, 1},
                       {15, 25, 13},
                       {20, 4, 7},
                       {11, 18, 14}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }

        cout << endl;
    }

    const int NUMBER_OF_ROWS = 6;
    const int NUMBER_OF_COLUMNS = 5;

    enum carType
    {
        GM,
        FORD,
        TOYOTA,
        BMW,
        NISSAN,
        VOLVO
    };
    enum colorType
    {
        RED,
        BROWN,
        BLACK,
        WHITE,
        GRAY
    };

    int inStock[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];

    inStock[FORD][WHITE] = 15;

    for (int i = 0; i < NUMBER_OF_ROWS; i++)
    {
        for (int j = 0; j < NUMBER_OF_COLUMNS; j++)
        {
            cout << inStock[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}