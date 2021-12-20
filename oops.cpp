#include <iostream>
using namespace std;


void cp() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

class shape {
public:
	virtual void getShape(int n, int y = 0) = 0;

};
class rect: public shape {
public:
	void getShape(int n, int y) {
		cout << "Shape Called from rect" << n << endl;
	}
};

class sqr : public shape {
public:
	void getShape(int n, int y = 0) {
		cout << " shape form sqare called" << n << endl;
	}
};


int main () {
	cp();
	sqr obj1;
	obj1.getShape(1);
	rect obj2;
	obj2.getShape(2, 6);
	return 0;
}