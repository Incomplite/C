#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    float a = 12345.1234567;
    cout.width(12);
    cout << a << "_______" << scientific << a << endl;
    cout.unsetf(ios::scientific);

    cout.setf(ios::left);
    cout.width(12);
    cout.fill('-');
    cout << a << endl;

    cout.setf(ios::right); cout.unsetf(ios::left);
    cout.width(12);
    cout << a << endl << endl << endl;
    cout.unsetf(ios::right);
    cout.fill(' ');

    cout << setw(12) << a << "_______" << scientific << a << endl;
    cout.unsetf(ios::scientific);

    cout << setfill('-') << setw(12) << left << a << endl;
    cout.unsetf(ios::left);
    cout << setfill('-') << setw(12) << right << a << endl;

}