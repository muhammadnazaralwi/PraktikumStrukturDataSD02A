// Mengisi nilai array pada saat deklarasi
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Menggunakan initializer list untuk mengisi nilai pada array n
    int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

    cout << "Element" << setw(13) << "Value" << endl;

    // Mencetak nilai pada array
    for (int i = 0; i < 10; i++)
    {
        cout << setw(7) << i << setw(13) << n[i] << endl;
    }
    
    return 0;
} // end main