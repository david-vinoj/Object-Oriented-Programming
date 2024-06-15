#include<iostream>
using namespace std;

class complex {
	public:
		float r,i;
		
		complex()
		{
			r=0;
			i=0;
		}
		
		complex(float x, float y)
		{
			r=x;
			i=y;
		}
		
		void print()
		{
			cout<<r<<" + "<<i<<"i"<<endl;
		}
		
		complex operator/(complex const &obj)
		{
			complex res;
			res.r=((r*obj.r)+(i*obj.i))/((obj.r*obj.r)+(obj.i*obj.i));
			res.i=((i*obj.r)-(r*obj.i))/((obj.r*obj.r)+(obj.i*obj.i));
			return res;
			
			
			/*(a+ib) / (c+id) = (ac + bd)/(c*c+d*d) + i (bc-ad)/(c*c+d*d)*/
			
		}
};

int main()
{
	float fr,fl,sr,si;
	cout<<"--------------------\nFirst Complex Number\n--------------------\n";
	cout<<"Real part: ";
	cin>>fr;
	cout<<"Imaginary part: ";
	cin>>fl;
	cout<<endl<<"---------------------\nSecond Complex Number\n---------------------\n";
	cout<<"Real part: ";
	cin>>sr;
	cout<<"Imaginary part: ";
	cin>>si;
	cout<<endl<<"---------------------------\nDivision of Complex Numbers\n---------------------------\n";
	 
	complex a(fr,fl),b(sr,si),c;
	c=a/b;
	c.print();
}
