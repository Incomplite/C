#include <iostream>
#include <string>
#include <vector>

using namespace std;

class stock {
	string nameCompany;
	int kolStock;
	float priceStock;
	vector<float> priceStockArray;
	float allPriceStock;

public:

	void acquire() {
		cout << "�������� ��������: ";
		cin >> nameCompany;
		cout << "���������� �����: ";
		cin >> kolStock;
		for (int i = 0; i < kolStock; i++) {
			cout << "��������� " << i + 1 << " �����: ";
			cin >> priceStock;
			priceStockArray.push_back(priceStock);

		}	
	}

	void set_tot() {
		for (int i = 0; i < kolStock; i++) {
			allPriceStock += priceStockArray[i];
		}
		cout << "��������� ���� ������: " << allPriceStock << "\n";
	}

	void buy() {
		cout << "������� ����� ��������: ";
		int a;
		cin >> a;
		for (int i = 0; i < a; i++) {
			cout << "���� " << i + 1 << " �����: ";
			cin >> priceStock;
			priceStockArray.push_back(priceStock);
		}
	}

	void sell() {
		cout << "������� ����� �������: ";
		int a;
		cin >> a;
		for (int i = 0; i < a; i--) {

		}
	}


};

int main() {
	setlocale(LC_ALL, "Russian");
	stock a;
	a.acquire();
	a.set_tot();
	a.buy();
	a.sell();
	return 0;
}