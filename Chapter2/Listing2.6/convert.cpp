//
// Created by AXIOO on 11/11/2025.
//// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int); // function prototype
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    cout << "Rahmat Taufik Aditiya 255440006";
    return 0;
}
int stonetolb(int sts)
{
    return 14 * sts;
}
