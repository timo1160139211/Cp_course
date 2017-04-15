#include <iostream>

using namespace std;

class Circle:public Point
{
protected:
	double radius;
public:
	Circle(double x,double y,double r):Point(x,y),radius(r){}
	
	double Area()
	{
		return 3.14*radius*radius;
	}
	
	friend ostream& operator<<(ostream& output,Circle& a)
	{
		output<<"x="<<a.x<<endl<<"y="<<a.y<<endl<<"°ë¾¶£º"<<a.radius<<endl<<"Ãæ»ý£º"<<a.Area()<<endl;
		return output;
	}
};
