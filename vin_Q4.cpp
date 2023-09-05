#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		int b;
		int sum,sub;
		void set()
		{
			cout << "Enter first value :- " ;
			cin >> a ;
	
			cout << "Enter second value :- " ;
			cin >> b ;
		}
};

class B : public A
{
	public:
		void math()
		{
			sum = a + b ;
			cout << "Addition = " << sum << endl ;
		}	
};

class C : public B
{
	public:
		void math()
		{
			sub = a - b ;
			cout << "Subtraction = " << sub << endl ;
		}	
};

int main()
{
	
	C obj;
	
	obj.set();
	obj.B::math();
	obj.math();
	
	return 0;
}
