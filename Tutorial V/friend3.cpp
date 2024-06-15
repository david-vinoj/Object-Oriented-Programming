#include<iostream>
using namespace std;
static int count=1;
class student
{
	private:
		int rno,m1,m2,tot;
	public:
		student()
		{
			rno=count;
			count=count+1;
			
		}
		void display()
		{
			cout<<" Roll number: "<<rno<<endl;
			cout<<" Mark 1: "<<m1<<endl;
			cout<<" Mark 2: "<<m2<<endl;
			cout<<" Total Mark: "<<tot<<endl;
			
			
		}
				
		~student()
		{
		}	
		
		friend class teacher;
};

class teacher
{
	public:
		void entermarks(student &t)
		{
			cout<<" Kindly enter mark 1: ";
			cin>>t.m1;
			cout<<" Kindly enter mark 2: ";
			cin>>t.m2;
			t.tot=t.m1+t.m2;
			cout<<endl;
		}
		
		
};

int main()

{
	int size;
	cout<<"Enter number of students: ";
	cin>>size;
	cout<<endl;
	
	student x[size];
	teacher binu;
	int i;
	for(i=0;i<size;i++)
	{
		cout<<"Details of student "<<i+1<<": "<<endl;
		binu.entermarks(x[i]);
		cout<<endl;	
		x[i].display();
		cout<<endl;
	}
}
