#include <iostream>
using namespace std;

int main() 
{
    int a, *b;
    a = 20;
    b = &a;
    cout << "Pointer b menunjukkan alamat = " << b << endl;
    cout << "Alamat tersebut berisi nilai = " << *b << endl;
}