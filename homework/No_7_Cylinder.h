#include <iostream>
using namespace std;

class Cylinder:public Circle
{
protected:
	double high;
public:
	Cylinder(double x,double y,double r,double h):Circle(x,y,r),high(h){}

	double Area()
	{
		return 2*Circle::Area()+2*3.14*high*radius;
	}
	
	friend ostream& operator<<(ostream& output,Cylinder& a)
	{
		output<<"x="<<a.x<<endl<<"y="<<a.y<<endl<<"�뾶��"<<a.radius<<endl<<"�ߣ�"<<a.high<<endl<<"�����"<<a.Area()<<endl;
		return output;
	}
};

