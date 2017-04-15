#include <iostream>
using namespace std;
class Point
{
protected:
	double x;
	double y;
public:
	Point(double x1,double y1):x(x1),y(y1){}
	
	friend ostream& operator <<(ostream& output,Point& p)
	{
		output<<"x="<<p.x<<endl<<"y="<<p.y<<endl;
		return output;
	}
};
