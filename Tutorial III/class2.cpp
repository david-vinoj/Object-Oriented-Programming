#include <iostream>
using namespace std;

class car {
	private:
		int liters;
		double consumption;
		
		public:
			car()
			{
				cout<<"Default Constructor: ";
				liters=40;
				consumption=0.1;
				cout<<endl<<"A car with given features of Liters: "<<liters<<" and Consumption: "<<consumption<<" has been created"<<endl;
			}
			
			car(int x, double y)
			{
				cout<<endl<<"Parameterized Constructor: ";
				liters=x;
				consumption=y;
				cout<<endl<<"A car with given features of Liters: "<<liters<<" and Consumption: "<<consumption<<" has been created"<<endl;
			}
			
			~car()
			{
				cout<<endl<<"Deconstructor: ";
				cout<<endl<<"A car with given features of Liters: "<<liters<<" and Consumption: "<<consumption<<" has been destroyed"<<endl;
			}
			
			void maxDistance()
			{
				double result;
				result=liters/consumption;
				cout<<"The maximum distance the car can travel on a single tank is: "<<result<<endl;
			}
};

int main()
{
	int x;
	double y;
	car obj1;
	obj1.maxDistance();
	car obj2(50,0.2);
	obj2.maxDistance();
}
