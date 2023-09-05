#include<iostream>
using namespace std;

class bank
{
	public:
		double ac_no;
		string name;
		string type;
		string branch;
		double balance;
		
		void set()
		{
			cout << "Enter A/C number :- " ;
			cin >> ac_no ;
			cout << "Enter A/C name :- " ;
			cin >> name ;
			cout << "Enter A/C type :- " ;
			cin >> type ;
			cout << "Enter A/C branch :- " ;
			cin >> branch ;
			cout << "Enter A/C balance :- " ;
			cin >> balance ;
		}

		void serch()
		{
			int a ;
			
			cout << "Enter A/C number to get data :- " ;
			cin >> a ;
			
			if(a == ac_no)
			{
		    	cout << endl << "A/C number :- " << ac_no << endl ;
				cout << "A/C name :- " << name << endl ;
				cout << "A/C type :- " << type << endl ;
				cout << "A/C branch :- " << branch << endl ;
				cout << "A/C balance :- " << balance << endl ;
			}
			else
			{
				cout << endl << "Wrong A/C number....." ;
			}
		}
};

int main()
{
	bank obj;
	
	obj.set();
	obj.serch();
	
	return 0 ;
}
