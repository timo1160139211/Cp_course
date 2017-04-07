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
	Square(int r1 = 1):length(r1){}
	float area(){return length*length;};

};

int main(){

	Circle c(1);
	Square s(2);
	Shape *p[2] = {&c,&s};

	float ss=0;
	ss=p[0]->area()+p[1]->area();

	cout << ss << endl;

	return 1;

}