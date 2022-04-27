#include <iostream>
using namespace std;

int main() 
{
    int v = 7, *p;
    p = &v;

    cout << "Nilai v = " << v << " dan *p = " <<  *p << endl;
    cout << "Alamatnya = " << p << endl;
    return 0;
}