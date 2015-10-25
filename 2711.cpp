#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Complex {
public:
	int real, image;
	Complex(int a, int b): real(a), image(b) {}
	friend ostream& operator<<(ostream& out, Complex& ex) {
		out << '(' << ex.real << ',' << ex.image << ')' << endl;
		return out;
	}
};

class ComplexAdd {
public:
	int real, image;
	ComplexAdd(int r = 0, int i = 0): real(r), image(i) {}
	void operator() (Complex& other) {
		other.real += real;
		other.image += image;
	}
};
