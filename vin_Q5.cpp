#include<iostream>
using namespace std;

class A
{
	public:
		int id;
		string name;
		string com_name;
		string role;
		double phone_no;
		double salary;
};

class B : public A
{
	public:
		void set1()
		{
			cout << "Enter Id :- " ;
			cin >> id ;
			cout << "Enter Name :- " ;
			cin >> name ;
		}
};

class C : public A
{
	public:
		void set2()
		{
			cout << "Enter Company name :- " ;
			cin >> com_name ;
			cout << "Enter Role :- " ;
			cin >> role ;
			cout << "Enter Phone number :- " ;
			cin >> phone_no ;
			cout << "Enter Salary :- " ;
			cin >> salary ;
		}
};

class D : public B , public C
{
	public:
		void get()
		{
			cout << endl << "Id :- " << B::id << endl ;
			cout << "Name :- " << B::name << endl ;
			cout << "Company name :- " << C::com_name << endl ;
			cout << "Role :- " << C::role << endl ;
			cout << "Phone number :- " << C::phone_no << endl ;
			cout << "Salary :- " << C::salary << endl ;
		}
};

int main()
{
	D obj;
	
	obj.set1();
	obj.set2();
	obj.get();
	
	return 0;
}
