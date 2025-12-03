// hexoct2.cpp -- Tampilkan nilai dalam format heksadesimal dan oktal
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;                                                      //  Manipulator untuk mengubah basis bilangan
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;                                                      //  Manipulator untuk mengubah basis bilangan
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    cout << "Rahmat Taufik Aditiya 255440006";
    return 0;
}