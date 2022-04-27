#include <iostream>
using namespace std;

int main() {
    int *pc, c;
    c = 22;
    cout << "Alamat variabel c: " << &c << endl;
    cout << "Nilai variabel c: " << c << endl;

    pc = &c;
    cout << "Alamat pointer pc: " << &pc << endl;
    cout << "Nilai pointer pc: " << pc << endl;
    cout << "Nilai dari address " << pc << " yaitu " << *pc <<  endl;

    c = 11;
    cout << "Alamat pointer pc: " << &pc << endl;
    cout << "Nilai pointer pc: " << pc << endl;
    cout << "Nilai dari address " << pc << " yaitu " << *pc <<  endl;

    *pc = 2;
    cout << "Alamat pointer pc: " << &pc << endl;
    cout << "Nilai pointer pc: " << pc << endl;
    cout << "Nilai dari address " << pc << " yaitu " << *pc <<  endl;
    
    return 0;
}