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
	string subject;//�����ڵĿ�Ŀ 
public:
	void display()
	{
		cout<<"����:"<<name<<endl;
		cout<<"����:"<<age<<endl;
		cout<<"�Ա�:"<<sex<<endl;
		cout<<"��ַ:"<<address<<endl;
		cout<<"���ڿ�Ŀ:"<<subject<<endl;
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
	string position;//ְλ 
public:
	void display()
	{
		cout<<"����:"<<name<<endl;
		cout<<"����:"<<age<<endl;
		cout<<"�Ա�:"<<sex<<endl;
		cout<<"��ַ:"<<address<<endl;
		cout<<"ְλ:"<<position<<endl;
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
		cout<<"ְλ:"<<position<<endl;
		cout<<"����:"<<wage<<endl;
	}
	
    TeaCadre(string na,int ag,string se,string ad,string su,string po,int w)
	:Teacher(na,ag,se,ad,su),Cadre(na,ag,se,ad,po),wage(w){}

};



int main()
{
	TeaCadre t("���",61,"��","¤���ɼ�","ʫ�ʸ踳","������ʿ",6666);
	t.show();
	return 0;
}
