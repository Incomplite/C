#include <iostream>;
#include <string>;

using namespace std;

class Base1 {

private:
	int i;

public:
	Base1() {
		i = 0;
		cout << "����������� Base1 ��� ���������� \n";
	}
	Base1(int _i) {
		i = _i;
		cout << "����������� Base1 c ���������� \n";
	}

	void PutInt(int value) {
		i = value;
	}

	int GetInt() {
		return i;
	}

};

class Base2 {
private:
	string name;

public:
	Base2() {
		name = "void";
		cout << "����������� Base2 ��� ���������� \n";
	}

	Base2(string _name) {
		name = _name;
		cout << "����������� Base2 � ���������� \n";
	}

	void PutString(string value) {
		name = value;
	}

	string GetString() {
		return name;
	}


};

class Derived : public Base2, public Base1 {
private:
	char ch;
public:
	Derived() {
		ch = 'V';
		cout << "����������� Derived ��� ���������� \n";
	}
	Derived(char _ch, string _name, int _i) : Base2(_name), Base1(_i) {
		ch = _ch;
		cout << "����������� Derived � ����������� \n";
	}
	void PutChar(char value) {
		ch = value;
	}
	char GetChar() {
		return ch;
	}

	friend ostream& operator<<(ostream& out, Derived& ob);
};

ostream& operator<<(ostream& out, Derived& ob) {
	return out << ob.GetInt() << "\n" << ob.GetString() << "\n" << ob.GetChar() << "\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	Derived ob, ob2('A', "bubble", 3);
	cout << ob << ob2;

	return 0;
}