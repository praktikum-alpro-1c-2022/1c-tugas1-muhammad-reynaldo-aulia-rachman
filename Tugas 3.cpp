#include <iostream>

using namespace std;


int main(){
    //  Tugas 3
    //Tidak Menggunakan Variable Sementara
    int a = 19;
    int b = 21;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Tidak Menggunakan Variable Sementara" << endl;
    cout << "Hasil a = " << a << endl;
    cout << "Hasil b = " << b << endl;

    return 0;
}
