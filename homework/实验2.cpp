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

//�������� 
void Date::setDate()
{
	cout<<"���������:"<<endl;
	cin>>year;
	cout<<"�������·�:"<<endl;
	cin>>month;	
	cout<<"����������:"<<endl;
	cin>>day;
	cout<<endl;
}

//�βδ��� 
void Date::setDate(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}

void Date::showDate()
{
	cout<<year<<"��"<<month<<"��"<<day<<"��"<<endl;
}

void Date::isLeapyear()
{
	if((year%4==0&&year%100!=0)||(year%400==0))
		cout<<year<<"��������."<<endl;
	else
		cout<<year<<"�겻������."<<endl;
}

int main()
{
	Date d1,d2;
	d1.setDate();
	d1.showDate();
	d1.isLeapyear();
	cout<<endl;
	
	cout<<"�βδ���"<<endl;
	d2.setDate(2000,1,1);
	d2.showDate();
	d2.isLeapyear();
	return 1;
}
