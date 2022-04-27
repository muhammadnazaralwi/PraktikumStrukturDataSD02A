#include <iostream>
using namespace std;

int main() 
{
    int value1 = 5, value2 = 15;
    int *myPointer;

    myPointer = &value1;
    *myPointer = 10;
    myPointer = &value2;
    *myPointer = 20;

    cout << "Value1 == " << value1 << endl;
    cout << "Value2 == " << value2 << endl;
    return 0;
}