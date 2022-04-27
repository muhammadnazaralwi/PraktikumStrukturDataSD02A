#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int *ip;

    ip = &var;

    cout << "Alamat variabel var: " << &var << endl;
    cout << "Alamat penyimpanan variabel ip di: " << ip << endl;
    cout << "Nilai dari variabel ip: " << *ip << endl;

    return 0;
}