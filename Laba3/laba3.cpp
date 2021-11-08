#include <iostream>;

using namespace std;

class Goods {
	string name;
	string date;
	int cost;
	int kol;
	int id;
public:
	Goods(string _name, string _date, int _cost, int _kol, int _id) {
		name = _name;
		date = _date;
		cost = _cost;
		kol = _kol;
		id = _id;
		cout << "Counstructor" << endl;
	}
	Goods() {
		name = "Unkown";
		date = "0000-00-00";
		cost = 0;
		kol = 0;
		id = 0;
		cout << "Default constructor" << endl;
	}
	~Goods() {
		cout << "Destructor" << endl;
	};

    void setName(string _name) {
        name = _name;
    }
    void setDate(string _date) {
        date = _date;
    }
    void setCost(int _cost) {
        cost = _cost;
    }
    void setKol(int _kol) {
        kol = _kol;
    }
    void setId(int _id) {
        id = _id;
    }
    int getS() {
        int S;
        S = kol * cost;
        return S;
    }
};

Goods tovar(Goods s) {
    return s;
};

int main(void) {
    setlocale(LC_ALL, "RU");
    cout << "Вход в функцию main()" << endl;
    Goods a;
    Goods b;
    tovar(a);
    tovar(b);

    cout << "Выход из функции main()" << endl;
}