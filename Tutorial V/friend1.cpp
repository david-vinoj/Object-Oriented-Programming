#include<iostream>
using namespace std;

class A{
	private:
		int x;
	
	public:
		A()
		{	
			x=10;
		}
		friend class B;
};

class B{
	private:
		int y;
	
	public:
		B()
		{	
			y=20;
		}
			void printvalue(A &val)
			{
				cout<<val.x;
			}
		
		
};

int main()
{
	A a;
	B b;
	b.printvalue(a);
}

	
