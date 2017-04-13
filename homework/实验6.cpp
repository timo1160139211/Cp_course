#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
	string name;
	int age;
	string sex;
	string address;
	string subject;//所教授的科目 
public:
	void display()
	{
		cout<<"姓名:"<<name<<endl;
		cout<<"年龄:"<<age<<endl;
		cout<<"性别:"<<sex<<endl;
		cout<<"地址:"<<address<<endl;
		cout<<"教授科目:"<<subject<<endl;
	}
	
	Teacher(string na,int ag,string se,string ad,string su)
	{
		name=na;        age=ag;       sex=se;
		address=ad;     subject=su;
	}
};

class Cadre
{
protected:
	string name;
	int age;
	string sex;
	string address;
	string position;//职位 
public:
	void display()
	{
		cout<<"姓名:"<<name<<endl;
		cout<<"年龄:"<<age<<endl;
		cout<<"性别:"<<sex<<endl;
		cout<<"地址:"<<address<<endl;
		cout<<"职位:"<<position<<endl;
		cout<<endl;
	}
	Cadre(string na,int ag,string se,string ad,string po)
	{
		name=na;		age=ag;		sex=se;
		address=ad;		position=po;
	}
};

class TeaCadre:public Teacher,public Cadre
{
private:
	int wage;
public:
	void show()
	{
		Teacher::display();
		cout<<"职位:"<<position<<endl;
		cout<<"工资:"<<wage<<endl;
	}
	
    TeaCadre(string na,int ag,string se,string ad,string su,string po,int w)
	:Teacher(na,ag,se,ad,su),Cadre(na,ag,se,ad,po),wage(w){}

};



int main()
{
	TeaCadre t("李白",61,"男","陇西成纪","诗词歌赋","青莲居士",6666);
	t.show();
	return 0;
}
