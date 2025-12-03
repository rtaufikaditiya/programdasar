// limits.cpp -- beberapa batas bilangan bulat
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n_int = INT_MAX;                    // Inisialisasi n_int ke nilai integer maksimum
    short n_short = SHRT_MAX;               // Simbol-simbol yang didefinisikan dalam berkas climits
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // Operator `sizeof` mengembalikan ukuran tipe atau variabel.
    cout << "n_int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum values:" << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    cout << "Rahmat Taufik Aditiya 255440006";
    return 0;
}