#include <iostream>
using namespace std;

template <class T>
class Test{
	public:
		Test(T x)
		{
		cout << x << " is not a character!" << endl;
		}
};	
template <>
class Test<char>{
	public:
		Test(char x)
		{
		cout << x << " is needed character!" << endl;
		}
};
int main()
{
	Test<int> obj1(7; 
	Test<double> obj2(3.154);
	Test<char> obj3('q');
	
}
