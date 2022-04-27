// Mengisi nilai elemen-elemen array dengan nol dan mencetaknya.
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int n[10]; // n merupakan array bertipe data integer yang berukuran 10

    // Mengisi nilai nol pada array n dengan perulangan 
    for (int i = 0; i < 10; i++)
    {
        n[i] = 0; // mengisi nilai elemen array pada index ke-i
    }
 
    cout << "Element" << setw(13) << "Value" << endl;
    
    // Mencetak nilai dari setiap elemen-elemen array
    for (int i = 0; i < 10; i++)
    {
        cout << setw(7) << i << setw(13) << n[i] << endl;
    }    

    return 0;
} // end main
