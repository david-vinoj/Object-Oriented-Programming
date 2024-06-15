#include <iostream>
using namespace std;

class VehicleRegistration {
	private: 
		int ChasisNo;
		string VehicleType, Nameofowner;
		
	public:
		int RegNo,RegYear;
		
	VehicleRegistration(int x, int y)
	{
		
		RegNo=x;
		RegYear=2022;
	
		cout<<endl<<"Vehicle Registration Number: "<<RegNo;
		cout<<endl<<"Vehicle Registration Year: "<<RegYear<<endl;
		getData();
	}
	void getData()
	{
		int a;
		string b,c;
		
		cout<<endl<<"Kindly enter details: "<<endl;
		cout<<"Vehicle Chassis Number: ";
		cin>>ChasisNo;
	
		cout<<endl<<"Vehicle Type: ";
		cin>>VehicleType;
		
		cout<<endl<<"Vehicle Owner Name: ";
		cin>>Nameofowner;
		
		cout<<endl<<"Entry Successfuly stored";
	}
	
	
	
	~VehicleRegistration()
	{
		cout<<endl<<"Deconstructor: ";
		cout<<endl<<"A car with given features has been destroyed"<<endl;
	}
};

int main()
{
	int a,b;
	
	
	VehicleRegistration obj1(1,2022);
	VehicleRegistration obj2(2,2022);

}
