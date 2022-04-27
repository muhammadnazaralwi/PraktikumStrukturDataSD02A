// Mengisi array dengan bilangan genap dari 2 - 20
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // constant merupakan nilai yang tidak bisa diubah
    const int arraySize = 10;

    int s[arraySize]; // array s memiliki 10 elemen

    for (int i = 0; i < arraySize; i++) // mengatur nilai dari array s
    {
        s[i] = 2 + 2 * i;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    // mencetak nilai pada array
    for (int i = 0; i < arraySize; i++)
    {   
        cout << setw(7) << i << setw(13) << s[i] << endl;
    }
    
    return 0;
} // end main