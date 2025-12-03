// hexoct.cpp -- menampilkan literal heksadesimal dan oktal
#include <iostream>
using namespace std;
int main() {
    int chest = 42;                 // bilangan bulat desimal literal
    int waist = 0x42;               // bilangan bulat hexadesimal literal
    int inseam = 042;               // bilangan bulat oktal literal

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in decimal)\n";
    cout << "Rahmat Taufik Aditiya 255440006";
    return 0;
}