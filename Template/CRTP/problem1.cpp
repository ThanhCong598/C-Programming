#include <iostream>
using namespace std;


struct Shape {
	virtual ~Shape() = default;
};


struct Square : public Shape {
	Square* Clone() { return new Square(*this); }
	int x = 1;
};

struct Rectangle : public Shape {
	Rectangle* Clone() { return new Rectangle(*this); }
	int x = 1;
	int y = 2;
};
