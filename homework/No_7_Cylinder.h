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
		output<<"x="<<a.x<<endl<<"y="<<a.y<<endl<<"°ë¾¶£º"<<a.radius<<endl<<"¸ß£º"<<a.high<<endl<<"Ãæ»ý£º"<<a.Area()<<endl;
		return output;
	}
};

