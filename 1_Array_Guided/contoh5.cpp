// Mengisi nilai variabel konstanta dengan cara yang salah (tidak langsung diisi)
#include <iostream>

int main() 
{
    const int x; // Error: x harus diisi nilainya

    x = 7; // Error: x tidak boleh dimodifikasi
    
    return 0;
}