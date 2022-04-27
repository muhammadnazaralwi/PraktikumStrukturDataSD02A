// Pengisian nilai pada array multidimensi
#include <iostream>
using namespace std;

void printArray(const int[][3]);
const int rows = 2;
const int columns = 3;

int main()
{
    int array1[rows][columns] = {{1, 2, 3}, {4, 5, 6}};
    int array2[rows][columns] = {1, 2, 3, 4, 5};
    int array3[rows][columns] = {{1, 2}, {4}};

    printArray(array1);

    printArray(array2);

    printArray(array3);

    return 0;
}

void printArray(const int a[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}
