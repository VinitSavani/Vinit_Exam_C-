#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	
	cout << "Enter first number :- " ;
	cin >> a ;
	
	cout << "Enter second number :- " ;
	cin >> b ;
	
	try
	{
		if(b == 0)
		{
			throw n;
		}
		cout << "Division = " << a / b ;
	}
	
	catch(...)
	{
		cout << "Can not devisable by zero...." ;
	}
	
	return 0;
}
