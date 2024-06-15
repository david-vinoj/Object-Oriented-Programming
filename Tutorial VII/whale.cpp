#include<iostream>
using namespace std;

class mammal {
	public:
		mammal()
		{
			cout<<"I am a mammal"<<endl;
		}
};

class marine {
	public:
		marine()
		{
			cout<<"I am a marine"<<endl;
		}
};

class publicbluewhale : public mammal,public marine {
	public:
		publicbluewhale()
		{
			cout<<"I belong to both categories"<<endl;
		}
	
};

class protectedbluewhale : protected mammal,protected marine {
	public:
		protectedbluewhale()
		{
			cout<<"I belong to both categories"<<endl;
		}
	
};

class privatebluewhale : private mammal,private marine {
	public:
		privatebluewhale()
		{
			cout<<"I belong to both categories"<<endl;
		}
	
};

int main()
{
	cout<<"Mammal: "<<endl;
	mammal obj1;
	cout<<endl<<"Marine: "<<endl;
	marine obj2;
	cout<<endl<<"Public Bluewhale: "<<endl;
	publicbluewhale obj3;
	cout<<endl<<"Protected Bluewhale: "<<endl;
	protectedbluewhale obj4;
	cout<<endl<<"Private Bluewhale: "<<endl;
	privatebluewhale obj5;
}
