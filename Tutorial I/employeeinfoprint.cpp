#include <iostream>
using namespace std;

class employee{
	public:
		string name;
		int year_of_joining;
		int salary;
		string address;
		
		employee getData1(employee a)
		{
			a.name="Robert";
			a.year_of_joining=1994;
			a.salary=300000;
			a.address="Aluva   ";
			return a;
		}
		
		employee getData2(employee b)
		{	
			b.name="Sam   ";
			b.year_of_joining=2000;
			b.salary=200000;
			b.address="Trissur ";
			return b;
		}
		
		employee getData3(employee c)
		{	
			c.name="John  ";
			c.year_of_joining=1999;
			c.salary=100000;
			c.address="Shornnur";
			return c;
		}
		
		
	
	void putData()
	{
		cout<<name<<"     "<<year_of_joining<<"              "<<salary<<"         "<<address;
	}
	};

int main()
{
	employee E1,E2,E3;
	E1=E1.getData1(E1);
	E2=E1.getData2(E2);
	E3=E1.getData3(E3);
	
	cout<<"Name       Year of joining   Salary         Address";
	cout<<endl;
	E1.putData();
	cout<<endl;
	E2.putData();
	cout<<endl;
	E3.putData();
	cout<<endl;
}	
