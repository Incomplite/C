#include <iostream>;

using namespace std;



class BASE {
public: int i;
protected: long l;
private: double d;
public:
	BASE(int _i, long _l, double _d) {
		i = _i;
		l = _l;
		d = _d;
	}
	BASE() {
		i = 0;
		l = 0;
		d = 0;
	}
	~BASE() {}

	double GetD() {
		return d;
	}

	void SetD(double _d) {
		d = _d;
	}

	void ff() {
		cout << "BASE" << endl;
	}

	double* GetAdressD() {
		return &d;
	}

	int* GetAdressI() {
		return &i;
	}

	long* GetAdressL() {
		return &l;
	}
};

class DERIVED : public BASE {
private:
	float f;
public:
	DERIVED(float _f, int _i, long _l, double _d) :BASE(_i, _l, _d) {
		f = _f;
	}
	DERIVED() {
		f = 0;
	}
	float* GetAddresF() {
		return &f;
	}
	void Show() {
		cout << f;
	}
	void ff() {
		cout << "DERIVED" << endl;
	}
	friend class DERIVED_1;
	friend ostream& operator<<(ostream& out, DERIVED& ob);
};

void ff() {
	cout << "Global" << endl;
}

ostream& operator<<(ostream& out, DERIVED& ob) {

	out << ob.f << " " << ob.i << " " << ob.l << " " << ob.GetD() << endl;
	out << ob.GetAddresF() << " " << ob.GetAdressI() << " " << ob.GetAdressL() << " " << ob.GetAdressD();
	return out;
}

class DERIVED_1 : public DERIVED {
public:
	DERIVED_1(float _f, int _i, long _l, double _d) :DERIVED(_f, _i, _l, _d) {
		f = _f;
		i = _i;
		l = _l;
		SetD(_d);
	}
	void foo() {
		i++;
		l += 1;
		ff();
	}

};



int main() {
	setlocale(LC_ALL, "Russian");
	DERIVED_1 ob1(1, 2, 3, 4);
	ob1.foo();
	cout << "Размер BASE: " << sizeof(BASE) << endl;
	cout << "Размер DERIVED: " << sizeof(DERIVED) << endl;
	cout << ob1;
	return 0;
}