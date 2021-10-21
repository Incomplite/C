#include <iostream>
#include <vector>

using namespace std;

class Book {
	string		Author;
	string		NameBook;
	string		PublishingHouse;
	int			Year;
	int			KolPages;

public:
	Book() {
		Author = "Unknown";
		NameBook = "Unknown";
		PublishingHouse = "Unknown";
		Year = 0;
		KolPages = 0;
	}
	Book(string a, string b, string c, int d, int e) {
		Author = a;
		NameBook = b;
		PublishingHouse = c;
		Year = d;
		KolPages = e;
	}
	~Book() {}

	void SetAuthor(string s) {
		Author = s;
	}
	void SetNameBook(string s) {
		NameBook = s;
	}
	void SetPublishingHouse(string s) {
		PublishingHouse = s;
	}
	void SetYear(int a) {
		Year = a;
	}
	void SetKolPages(int a) {
		KolPages = a;
	}

	string GetAuthor(){
		return Author;
	}
	string GetNameBook() {
		return NameBook;
	}
	string GetPublishingHouse() {
		return PublishingHouse;
	}
	int GetYear() {
		return Year;
	}
	int GetKolPages() {
		return KolPages;
	}

	void Show(){
		cout << "ФИО автора: " << Author << endl;
		cout << "Название книги: " << NameBook << endl;
		cout << "Издательство: " << PublishingHouse << endl;
		cout << "Год выпуска: " << Year << endl;
		cout << "Количество страниц: " << KolPages << endl;
	}
	
};

int main() {
	setlocale(LC_ALL, "Russian");

	vector<Book> bookArray;

	Book first("Артасов Б.Г.", "War or not", "Phoenix", 2010, 572);
	Book second("Джиганов А.С.", "Magazine baltika", "Rostzdat", 1982, 628);
	Book third("Клиенко Ц.Б.", "Danichka na prirode", "Evropa", 2001, 435);
	Book fourth("Аладин Х.В.", "Shiish", "Fargus", 1995, 1076);

	bookArray.push_back(first);
	bookArray.push_back(second);
	bookArray.push_back(third);
	bookArray.push_back(fourth);

	for (int i = 0; i < bookArray.size(); i++) {
		if (bookArray[i].GetAuthor() == "Артасов Б.Г.") {
			bookArray[i].Show();
			cout << endl;
		}
		else if (bookArray[i].GetPublishingHouse() == "Fargus") {
			bookArray[i].Show();
			cout << endl;
		}
		else if (bookArray[i].GetYear() > 2000) {
			bookArray[i].Show();
			cout << endl;
		}
	}
	return 0;
}