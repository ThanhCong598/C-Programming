#include <iostream>
using namespace std;


#include<vector>

struct Shape {

	virtual Shape*Clone() = 0;
	virtual ~Shape() = default;
};


template <typename T>
struct ShapeCRTP: public Shape {

	virtual Shape* Clone() override { return new T(* static_cast<T*> (this)); }
};
struct Square : public ShapeCRTP<Square> {
	
	int x = 1;
};

struct Rectangle : public ShapeCRTP<Square> {
	
	int x = 1;
	int y = 2;
};

int main() {
	vector<Shape*>v;
	v.push_back(new Square);
	v.push_back(new Rectangle);

	for (auto s : v) {
		Shape* c = s->Clone();
	}
}
