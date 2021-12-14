#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout.setf(ios::boolalpha); // ������� true || false � ��������� ����
	bool log_false = 0, log_true = 1;
	cout << log_false << endl << log_true << endl;
	cout.unsetf(ios::boolalpha);


	cout.unsetf(ios::dec); // ������� ���� dec(���������� ����� ������)
	cout.setf(ios::oct); // ����� � ������������ �������
	int value = 64;
	cout << value << endl;
	cout.unsetf(ios::oct); // ������� ���� � ������ � ������������ �������
	cout.setf(ios::dec); // ����� � ���������� ������� ��������� (�� ���������)

	cout.unsetf(ios::dec);
	cout.setf(ios::hex); // ����� � ����������������� �������
	cout << value << endl;

	cout.unsetf(ios::dec);
	cout.setf(ios::oct | ios::showbase); //���������� ��������� ������� ��������
	cout << value << endl;

	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::uppercase); // ������� "�����" � ������� ��������
	cout << value << endl;
	cout.unsetf(ios::hex | ios::uppercase);

	cout.setf(ios::showpos); // ������� + ����� �������������� �������
	cout << value << endl;

	cout.setf(ios::scientific); //������� ������� ����� � ���������������� (�������) �����
	double value1 = 1024.165;
	cout << value1 << endl;

	cout.unsetf(ios::scientific);
	cout << value1 << endl; // ����� �� ���������

	cout.width(50);
	cout << "123456789" << endl; // right - ����������� �� ������ ����� (�� ���������)

	cout.setf(ios::left); //  ��� �� ��� � "right", ������ �� ����� �����
	cout.width(50);
	cout << "123456789" << endl;
	cout.unsetf(ios::left);

	cout.fill('-');
	cout.setf(ios::left);
	cout.width(50); // ���� ���-��, ��� ��������� ������ ���, ��������� ������ (setw()), �� ������ ������������ �������� ������ �����������
	cout << "123456789" << endl;

	//��� 3
	/*
	cout << endl << endl << setfill('*') << setw(50) << "ex3" << endl;
	//boolalpha, oct, dec, hex, showbase, uppercase, showpos, scientific, fixed, right, left , fill
	cout.setf(ios::hex);
	cout << 12 << endl;
	cout.unsetf(ios::hex);
	*/


	//��� 4.1
	/*
	cout << endl << endl << setfill('*') << setw(50) << "ex4" << endl;
	for (i = 0; i < 7; i++)
		cout << s << endp;
	*/

	//��� 4.2
	/*
	cout << endl << endl << setfill('*') << setw(50) << "ex4.1" << endl;
	for (i = 0; i < 7; i++)
		cout << s << endp(2);
	*/
	// work but in theory

	//��� 4.3
	/*
	cout << endl << endl << setfill('*') << setw(50) << "ex4.1" << endl;
	int f = 2;
	for (i = 0; i < 7; i++)
		cout << s << endp(f,s);
	*/
}