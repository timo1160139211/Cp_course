#include<iostream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	void setDate();
	void showDate();
	void setDate(int ,int ,int);
	void isLeapyear();
};

//键盘输入 
void Date::setDate()
{
	cout<<"请输入年份:"<<endl;
	cin>>year;
	cout<<"请输入月份:"<<endl;
	cin>>month;	
	cout<<"请输入日期:"<<endl;
	cin>>day;
	cout<<endl;
}

//形参传入 
void Date::setDate(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}

void Date::showDate()
{
	cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
}

void Date::isLeapyear()
{
	if((year%4==0&&year%100!=0)||(year%400==0))
		cout<<year<<"年是闰年."<<endl;
	else
		cout<<year<<"年不是闰年."<<endl;
}

int main()
{
	Date d1,d2;
	d1.setDate();
	d1.showDate();
	d1.isLeapyear();
	cout<<endl;
	
	cout<<"形参传入"<<endl;
	d2.setDate(2000,1,1);
	d2.showDate();
	d2.isLeapyear();
	return 1;
}
