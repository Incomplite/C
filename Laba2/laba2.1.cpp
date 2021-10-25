﻿#include <iostream>;

using namespace std;

class Test {
protected:
	int W;
	void Z() {
		cout << "Это приватная функция класса Test" << endl;
	}
public:
	Test() {
		W = 1;
	}
	Test(int _W) {
		W = _W;
	}

	~Test() {};

	friend void Fun(Test ob);
};


void Fun(Test ob) {
	cout << ob.W << endl;
	ob.Z();
}

void main() {
	setlocale(LC_ALL, "Russian");
	Test ob;
	Fun(ob);
}