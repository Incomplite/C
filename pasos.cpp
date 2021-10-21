#include <iostream>

using namespace std;


class tovar {
	const char* name;
	int kol;
	float price;

public:

	void input(const char* valuename, int valuekol, float valueprice) {
		name = valuename;
		kol = valuekol;
		price = valueprice;
	}

	void out() {
		cout << "Наименование товара: " << name << "\n" << "Количество товара: " << kol << "\n" << "Цена товара: " << price << "\n" << "\n";
	}
};



int main() {
	setlocale(LC_ALL, "Russian");

	tovar monitor;
	monitor.input("Монитор", 10, 15000);
	monitor.out();

	tovar klava;
	klava.input("Клавиатура", 20, 4000);
	klava.out();

	return 0;
}