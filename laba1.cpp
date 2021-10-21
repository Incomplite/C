#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Stock {
	string companyName;
	int stockNum;
	vector<float> stockCostArray;
	float stockCost;
	double allStockCost;

public:
	Stock() {
		companyName = "Unkown";
		stockNum = 0;
	}
	Stock(string s, int i) {
		companyName = s;
		stockNum = i;
		cout << "Введите стоимость каждой акции: " << endl;
		for (int i = 0; i < stockNum; i++) {
			int sCost;
			cout << "	Акция номер " << i + 1 << " : ";
			cin >> sCost;
			stockCostArray.push_back(sCost);
		}
	}
	int Buy(int sNum) {
		if (sNum > 0) {
			float sCost;
			for (int i = 0; i < sNum; i++) {
				cout << "Цена приобретенной акции №" << i + 1 << " : ";
				cin >> sCost;
				stockCostArray.push_back(sCost);
				stockNum++;
			}
		}
			return 0;
	}

	int Sell(int sNum) {
		if (sNum > 0) {
			int ndx;
			for (int i = 0; i < sNum; i++) {
				cout << "Номер проданной акции в массиве: ";
				cin >> ndx;
				ndx--;
				for (int i = ndx; i < stockNum - 1; i++) {
					stockCostArray[i] = stockCostArray[i + 1];
				}
				stockCostArray.pop_back();
				stockNum--;
			}
		}
			return 0;
	}

	void Update(int ndx, float cost) {
		ndx -= 1;
		stockCostArray[ndx] = cost;
		SetTotal();
	}

	void Show() {
		SetTotal();
		cout <<  "Название компании: " << companyName << endl;
		cout <<  "Общее количество акций: " << stockNum << endl;
		cout << "Общая стоимость всех акций: " << allStockCost << endl;
	}
	~Stock() {};
private:
	void SetTotal() {
		allStockCost = 0;
		for (int i = 0; i < stockNum; i++) {
			allStockCost += stockCostArray[i];
		}
	}
};

void stockClassWorkTest() {
	vector<Stock> stocksArray;
	Stock a("jaja", 2), b, c, d, e;
	stocksArray.push_back(a);
	stocksArray.push_back(b);
	stocksArray.push_back(c);
	stocksArray.push_back(d);
	stocksArray.push_back(e);
	for (int i = 0; i < stocksArray.size(); i++) {
		stocksArray[i].Show();
	}
	a.Buy(1);
	a.Sell(1);
	a.Update(1,75);
	a.Show();
}

void main() {
	setlocale(LC_ALL, "Russian");
	stockClassWorkTest();
}
