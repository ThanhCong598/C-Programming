#include <iostream>
using namespace std;


#include<vector>

struct Shape {

	template <typename T>
	T* Clone() { return new T(*this); }
	virtual ~Shape() = default;
};


struct Square : public Shape {
	
	int x = 1;
};

struct Rectangle : public Shape {
	
	int x = 1;
	int y = 2;
};

int main() {
	vector<Shape*>v;
	v.push_back(new Square);
	v.push_back(new Rectangle);

	for (auto s : v) {
		Shape* c = s->Clone<Shape>();
	}
}
