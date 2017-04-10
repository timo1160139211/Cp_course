#include<iostream>
#include<string>

using namespace std;

struct Worker
{
	string name;
	string sex;
	int age;
	string isMarried;
    string address;
    double monthlysalary;
	double bonus;//年终奖 
};

void Setworker(struct Worker &a)
{
	cout<<"请输入工人的姓名："<<endl;
	cin>>a.name;
	cout<<"请输入工人的性别(男/女)："<<endl;
	cin>>a.sex;	
	cout<<"请输入工人的年龄："<<endl;
	cin>>a.age;
	cout<<"请输入工人的婚姻状况(已婚/未婚)："<<endl;
	cin>>a.isMarried;
	cout<<"请输入工人的家庭住址："<<endl;
	cin>>a.address;
	cout<<"请输入工人的月基本工资："<<endl;
	cin>>a.monthlysalary;
	cout<<"请输入工人的年终奖金："<<endl;
	cin>>a.bonus;

}

void Showworker(struct Worker &a)
{
	cout<<" 姓名:"<<a.name<<endl;
	cout<<" 性别:"<<a.sex<<endl;
	cout<<" 年龄:"<<a.age<<endl;
	cout<<" 婚姻状况:"<<a.isMarried<<endl;
	cout<<" 家庭住址:"<<a.address<<endl;
	cout<<" 月基本工资:"<<a.monthlysalary<<endl;
	cout<<" 年终奖金:"<<a.bonus<<endl;

}

void Calyearlysalary(struct Worker &a)
{
    cout<<" 该工人的年收入为:"<< 12*a.monthlysalary + a.bonus <<endl;
    cout<<endl;
    
}


int main()
{	
	//定义三个工人 
	struct Worker w[3];
	
	cout<<"请依次输入三个工人信息："<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"***********************"<<endl; 
		cout<<"第"<<i+1<<"个工人:"<<endl; 
		Setworker(w[i]);
		cout<<endl;
	}    
	
	cout<<"工人信息："<<endl;
	
	for(int j=0;j<3;j++)
	{
		cout<<"第"<<j+1<<"个工人:"<<endl; 		
		Showworker(w[j]);
		Calyearlysalary(w[j]);
		cout<<endl;
		cout<<endl;
	}
	return 0;
}


