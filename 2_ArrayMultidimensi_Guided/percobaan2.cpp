//penjumlahan array
#include <iostream>
using namespace std;

void printArray(const int[3][3]);
const int rows = 3;
const int columns = 3;

int main()
{
    int array1[rows][columns] = {{1, 2, 3},
                                 {4, 5, 6},
                                 {7, 8, 9}};

    int array2[rows][columns] = {{1, 2, 3},
                                 {4, 5, 6},
                                 {7, 8, 9}};

    int array3[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
	printArray(array1);
	cout<<"  +  "<<endl<<endl;
	printArray(array2);
	cout<<"  =  "<<endl<<endl;
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
