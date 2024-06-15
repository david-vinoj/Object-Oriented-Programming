#include<iostream>
using namespace std;

class student {
	public: 
		int rollno;
		string name;
		int mark1,mark2,mark3,total;
		
		student()
		{
			cout<<" Kindly enter student roll no: ";
			cin>>rollno;
			cout<<" Kindly enter student name: ";
			cin>>name;
			cout<<" Kindly enter mark 1: ";
			cin>>mark1;
			cout<<" Kindly enter mark 2: ";
			cin>>mark2;
			cout<<" Kindly enter mark 3: ";
			cin>>mark3;
		}
		
		int calctotal()
		{
			total=mark1+mark2+mark3;
			return total;
		}
		
		virtual void showData()
		{
			cout<<endl<<"   Roll no: "<<rollno;
			cout<<endl<<"   Name: "<<name;
			cout<<endl<<"   Mark 1 : "<<mark1;
			cout<<endl<<"   Mark 2 : "<<mark2;
			cout<<endl<<"   Mark 3 : "<<mark3;
			cout<<endl<<"   Total : "<<total<<endl;
		}
};

class minorcourse : public student {
	public:
	 	string minorm1,minorm2,minorm3;
	 	
	 	minorcourse()
	 	{
	 		cout<<" Kindly enter minor course 1 name: ";
			cin>>minorm1; 
			cout<<" Kindly enter minor course 2 name: ";
			cin>>minorm2; 
			cout<<" Kindly enter minor course 3 name: ";
			cin>>minorm3;
		}
		
		void showData()
		{
			cout<<endl<<"   Roll no: "<<rollno;
			cout<<endl<<"   Name: "<<name;
			cout<<endl<<"   "<<minorm1<<" mark  : "<<mark1;
			cout<<endl<<"   "<<minorm2<<" mark  : "<<mark2;
			cout<<endl<<"   "<<minorm3<<" mark  : "<<mark3;
			cout<<endl<<"   Total : "<<total<<endl;
		 
		}
};

int main()
{
	cout<<endl<<"Student class entry"<<endl;
	
	student obj1;
	obj1.calctotal();
	
	cout<<endl<<"Minorcourse class entry"<<endl;
	minorcourse obj2;
	obj2.calctotal();
	
	student *ptr;
	ptr=&obj2;
	
	cout<<endl<<"Student class display";
	obj1.showData();
	cout<<endl<<"Minorcourse class display";
	obj2.showData();
	cout<<endl<<"pointer way display";
	ptr->showData();
}


	
