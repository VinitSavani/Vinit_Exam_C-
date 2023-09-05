#include<iostream>
using namespace std;

fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	return n = fact(n-1);
}

printfact(int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		cout << ;
	}
}

int main()
{
	int a;
	
	cout << "Enter number to find factorial :- " ;
	cin >> a ;
	
	fact(a);
	printfact(a);
	
	return 0;
}
