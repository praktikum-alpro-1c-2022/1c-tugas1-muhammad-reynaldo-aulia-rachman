#include <iostream>

using namespace std;

int main()
{
    //  Tugas 2
    int a = 12;
    int b = 24;

    int temp = a;
    a = b;
    b = temp;

    cout << "Menggunakan Variable Sementara" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;


    return 0;
}
