#include <iostream>
using namespace std;

class areaofr{
	public:
		int length;
		int breadth;
		int area;
		
		areaofr setDim(areaofr r)
		{
			r.length=3;
			r.breadth=4;
			r.area=r.length*r.breadth;
			return r;
		}
		
		void getArea()
		{
			cout<<"Area of rectangle is: "<<area<<endl;
		}
		
	};

int main()
{
	areaofr r1;
	r1=r1.setDim(r1);
	r1.getArea();
}
			
		
