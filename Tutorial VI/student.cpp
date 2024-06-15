#include<iostream>
using namespace std;

class student {
	public:
		string name;
		int rollno;
		
		
		
		void getsdata()
		{
			cout<<" Kindly enter roll no: ";
			cin>>rollno;
			cout<<" Kindly enter name: ";
			cin>>name;
		}
		
		void sdisplay()
		{
			cout<<"Roll number: "<<rollno<<endl;
			cout<<"Name: "<<name<<endl;	
		}

};

class intern : public student {
	public:
		
		int IA1;
		int IA2;
		int IA3;
		void getidata()
		{
			cout<<" Kindly enter internal assesment mark 1: ";
			cin>>IA1;
			cout<<" Kindly enter internal assesment mark 2: ";
			cin>>IA2;
			cout<<" Kindly enter internal assesment mark 3: ";
			cin>>IA3;
		}
		
		void idisplay()
		{
			cout<<"Internal assesment mark 1: "<<IA1<<endl;
			cout<<"Internal assesment mark 2: "<<IA2<<endl;
			cout<<"Internal assesment mark 3: "<<IA3<<endl;
			
		}
		friend class result;	
};

class external : public student {
	public:
		int ESE;
		
		void getedata()
		{
			cout<<" Kindly enter End Semester Examination mark: ";
			cin>>ESE;
		}
		
		void edisplay()
		{
			cout<<"End Semester Examination Mark: "<<ESE<<endl;
		}
		friend class result;
};

class result : public intern,public external
{
	public:
		int total;
		
		void calctotal(intern &t,external &x)
		{
			total=t.IA1+t.IA2+t.IA3+x.ESE;
		}
		
		void rdisplay()
		{
			cout<<"Total Marks: "<<total<<endl;
		}	
};

int main()
{
	student s1;
	intern i1;
	external e1;
	result r1;
	
	cout<<"Mark details of students "<<endl;
	s1.getsdata();
	i1.getidata();
	e1.getedata();
	
	r1.calctotal(i1,e1);
	cout<<endl;
	
	cout<<"Result "<<endl;
	s1.sdisplay();
	i1.idisplay();
	e1.edisplay();
	r1.rdisplay();

}
