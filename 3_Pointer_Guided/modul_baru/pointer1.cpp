#include <iostream>
using namespace std;

int main() {
    int x;
    int *px;

    x = 2;
    px = &x;

    cout << "Nilai x             : " << x << endl;
    cout << "Nilai *px           : " << *px << endl;
    cout << "Nilai px (alamat x) : " << px << endl;

    return 0;
}