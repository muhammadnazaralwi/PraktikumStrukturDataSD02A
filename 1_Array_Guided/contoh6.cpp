// Menjumlahkan elemen-elemen array
#include <iostream>
using namespace std;

int main() {
    const int arraySize = 10; // Ukuran array dengan variabel konstanta
    int a[arraySize] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    int total = 0;

    // Menjumlahkan isi dari array a
    for (int i = 0; i < arraySize; i++)
    {
        total += a[i];
    }
    
    cout << "Total of array elements: " << total << endl;

    return 0;
}