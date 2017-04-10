#include <iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date()
	{
		year=1;
		month= 1;
		day=1;
	}
	
	Date(int y,int m,float d)
	{
		year=y;
		month=m;
		day=d;
	}
	
	Date(int y,int m,int d):year(y),month(m),day(d){}
	
	~Date()
	{
		cout<<"调用析构函数"<<endl;
	}
	
	void ShowDate()
	{	
		cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
	}	
};

int main()
{
	Date s[3]={ Date(),
				Date(1997,2,19),
				Date(1997,3,6)
				};
				
	for(int i=0;i<3;i++)
	{	
		s[i].ShowDate();
	}
	
	return 1;
}
