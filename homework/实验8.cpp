#include <iostream>
using namespace std;

class Shape{
public:
	virtual float area()=0;

};

class Circle:public Shape{

	int r;

public:
	Circle(int r1 = 1):r(r1){}
	float area(){return 3.14*r;};
};

class Square:public Shape{

	int length;

public:
	Square(int l = 1):length(l){}
	float area(){return length*length;};

};

class Rectangle:public Shape{

	int width;
	int length;

public:
	Rectangle(int l = 2,int w = 3):width(w),length(l){}
	float area(){return width*length;};

};
int main(){

	Circle c(1);
	Square s(2);
	Rectangle r(2,5);
	Shape *p[3] = {&c,&s,&r};

	float ss=0;
	ss=p[0]->area()+p[1]->area()+p[2]->area();

	cout << ss << endl;

	return 1;

}
