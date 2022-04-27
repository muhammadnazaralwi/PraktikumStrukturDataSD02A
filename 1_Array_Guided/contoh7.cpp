// Mengisi array dengan input dari user
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Ukuran array menggunakan variabel
    int arraySize;

    cout << "Input ukuran array: ";
    cin >> arraySize;

    int s[arraySize]; // array s memiliki elemen sebanyak nilai dari arraySize

    for (int i = 0; i < arraySize; i++) // melakukan perulangan untuk mengisi nilai array s berdasarkan input user
    {
        cout << "Input elemen array ke-" << i << ": ";
        cin >> s[i];
    }

    cout << "Element" << setw(13) << "Value" << endl;

    // mencetak nilai pada array
    for (int i = 0; i < arraySize; i++)
    {   
        cout << setw(7) << i << setw(13) << s[i] << endl;
    }
    
    return 0;
} // end main