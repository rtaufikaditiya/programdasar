// exceed.cpp -- melebihi batas bilangan bulat tertentu
#include <iostream>
#define ZERO 0                              // Membuat simbol ZERO untuk nilai 0
#include <climits>                          // Menentukan INT_MAX sebagai nilai integer terbesar.
using namespace std;
int main() {
    short sam = SHRT_MAX;                   // Inisialisasi variabel ke nilai maksimum
    unsigned short sue = sam;               // Oke, jika variabel sam sudah didefinisikan.

    cout << "Sam has " << sam << " dollars and Sue Has "<< sue;
    cout << " dollars deposited." << endl;
    cout << "Add $1 to each account." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollar and Sue Has "<< sue;
    cout << " dollar deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollar and Sue Has "<< sue;
    cout << " dollar deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollar and Sue Has "<< sue;
    cout << " dollar deposited." << endl << "Lucky Sue!" << endl;

    cout << "Rahmat Taufik Aditiya 255440006";
    return 0;
}