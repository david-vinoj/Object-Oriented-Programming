#include <iostream>
using namespace std;

class my_class {
	public:
		int a,b;
		
		my_class()
		{
			a=6;
			b=9;
			cout<<"Executing Default Constructor";
			cout<<endl<<"Value of a: "<<a;
			cout<<endl<<"Value of b: "<<b<<endl;
		}
		
		my_class(int x,int y)
		{
			a=x;
			b=y;
			cout<<endl<<"Executing Parameterised Constructor";
			cout<<endl<<"Value of a: "<<a;
			cout<<endl<<"Value of b: "<<b<<endl;
			
		}
		
		~my_class()
		{
			cout<<endl<<"Executing Destructor"<<endl;
		}
		
};

int main()
{
	my_class obj1;
	my_class obj2(9,11);
	
}
