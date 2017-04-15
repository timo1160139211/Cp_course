#include<iostream>
#include "No_7_Point.h"
#include "No_7_Circle.h"
#include "No_7_Cylinder.h"
using namespace std;

int main()
{
	Point p(1.0,2.0); 
	Circle ci(1.0,2.0,3.0);
    Cylinder cy(1.0,2.0,3.0,4.0);

	cout<<p<<endl;
	cout<<ci<<endl;
	cout<<cy<<endl;

	return 0;
}
