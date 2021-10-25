#include <iostream>;
#include <vector>;
#include <iomanip>;
using namespace std;


class Abonent {
public:
	int id;
protected:
	string Surname;
	string PhoneNumber;
public:
	Abonent(int _id, string _Surname, string _PhoneNumber) {
		id = _id;
		Surname = _Surname;
		PhoneNumber = _PhoneNumber;
	}
	~Abonent() {};


	friend class Notebook;
};

class Notebook {

public:

	void change(Abonent& ob, string _newPhoneNumber) {
		ob.PhoneNumber = _newPhoneNumber;
	}
	void show(Abonent& ob) {
		cout << "|" << setw(4) << ob.id;
		cout << "|" << setw(12) << ob.Surname;
		cout << "|" << setw(12) << ob.PhoneNumber << "|" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	vector <Abonent> abonentArray;
	Notebook notebook;
	abonentArray.push_back(Abonent(1, "Иванов", "89184005916"));
	abonentArray.push_back(Abonent(2, "Петров", "89184567181"));
	abonentArray.push_back(Abonent(3, "Чичканов", "89184514920"));
	abonentArray.push_back(Abonent(4, "Ветров", "89184514979"));
	abonentArray.push_back(Abonent(5, "Братанов", "89184515687"));
	for (int i = 0; i < abonentArray.size(); i++) {
		if (abonentArray[i].id == 2) {
			notebook.change(abonentArray[i], "89990548400");
			break;
		}
	}
	cout << "|" << setw(4) << "id";
	cout << "|" << setw(12) << "Surname";
	cout << "|" << setw(12) << "PhoneNumber" << "|" << endl;
	for (int i = 0; i < abonentArray.size(); i++) {
		notebook.show(abonentArray[i]);
	}
	return 0;
}