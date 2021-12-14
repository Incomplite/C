#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "переход на след строку ->" << endl << "след строка";

    bool log_true = 1;
    cout << boolalpha << log_true << endl;

    log_true = true;
    cout << noboolalpha << log_true << endl;

    int value = 64;
    cout << oct << value << endl;
    cout << dec << value << endl;
    cout << hex << value << endl;

    value = 255;
    cout << uppercase << hex << value << endl;
    cout.unsetf(ios::uppercase | ios::hex);

    cout << nouppercase << hex << value << endl;
    cout.unsetf(ios::hex);

    cout << showpos << value << endl;
    cout.unsetf(ios::showpos);

    cout << noshowpos << value << endl;

    double value1 = 1024.165;
    cout << scientific << value1 << endl;
    cout.unsetf(ios::scientific);
    cout << fixed << value1 << endl;

    cout << setw(50) << "123456789" << endl;

    cout << setw(50) << right << "123456789" << endl;

    cout << setw(50) << left << "123456789" << endl;

    cout << fixed << setprecision(3) << 34.34456789 << endl;

    cout << setfill('-') << setw(50) << "123456789" << endl; 
}