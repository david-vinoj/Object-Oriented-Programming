#include <iostream>
using namespace std;

class complex {
	public:
		int real;
		int imag;
		
		void getData()
		{
			cout<<endl<<"Enter real number value: ";
			cin>>real;
			cout<<"Enter imaginary number value: ";
			cin>>imag;
		}
		
		void putData()
		{
			cout<<endl<<real<<" + "<<imag<<"i";
		}
		
		complex add(complex a, complex b, complex c)
		{
			complex d;
			d.real=a.real+b.real+c.real;
			d.imag=a.imag+b.imag+c.imag;
			return d;
		}
		
		complex subtract(complex x, complex y)
		{
			complex z;
			z.real=x.real-y.real;
			z.imag=x.imag-y.imag;
			return z;
		}
		};

int main()
{
	complex C1,C2,C3,C4,C5,C6,C7;
	cout<<"Addition of three complex numbers"<<endl;
	cout<<endl<<"Complex number 1 ";
	C1.getData();
	cout<<endl<<"Complex number 2 ";
	C2.getData();
	cout<<endl<<"Complex number 3 ";
	C3.getData();
	C4=C4.add(C1,C2,C3);
	cout<<endl<<"The sum of the above three complex numbers is: ";
	C4.putData();
	cout<<endl<<"______________________________________________"<<endl;
	cout<<endl<<endl<<"Subtraction of two complex numbers";
	cout<<endl<<endl<<"Complex number 1 ";
	C5.getData();
	cout<<endl<<"Complex number 2 ";
	C6.getData();
	C7=C7.subtract(C5,C6);
	cout<<endl<<"The difference of the above two complex numbers is: ";
	C7.putData();
	cout<<endl;
}
	
	
	
