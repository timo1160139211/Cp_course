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
	double bonus;//���ս� 
};

void Setworker(struct Worker &a)
{
	cout<<"�����빤�˵�������"<<endl;
	cin>>a.name;
	cout<<"�����빤�˵��Ա�(��/Ů)��"<<endl;
	cin>>a.sex;	
	cout<<"�����빤�˵����䣺"<<endl;
	cin>>a.age;
	cout<<"�����빤�˵Ļ���״��(�ѻ�/δ��)��"<<endl;
	cin>>a.isMarried;
	cout<<"�����빤�˵ļ�ͥסַ��"<<endl;
	cin>>a.address;
	cout<<"�����빤�˵��»������ʣ�"<<endl;
	cin>>a.monthlysalary;
	cout<<"�����빤�˵����ս���"<<endl;
	cin>>a.bonus;

}

void Showworker(struct Worker &a)
{
	cout<<" ����:"<<a.name<<endl;
	cout<<" �Ա�:"<<a.sex<<endl;
	cout<<" ����:"<<a.age<<endl;
	cout<<" ����״��:"<<a.isMarried<<endl;
	cout<<" ��ͥסַ:"<<a.address<<endl;
	cout<<" �»�������:"<<a.monthlysalary<<endl;
	cout<<" ���ս���:"<<a.bonus<<endl;

}

void Calyearlysalary(struct Worker &a)
{
    cout<<" �ù��˵�������Ϊ:"<< 12*a.monthlysalary + a.bonus <<endl;
    cout<<endl;
    
}


int main()
{	
	//������������ 
	struct Worker w[3];
	
	cout<<"��������������������Ϣ��"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"***********************"<<endl; 
		cout<<"��"<<i+1<<"������:"<<endl; 
		Setworker(w[i]);
		cout<<endl;
	}    
	
	cout<<"������Ϣ��"<<endl;
	
	for(int j=0;j<3;j++)
	{
		cout<<"��"<<j+1<<"������:"<<endl; 		
		Showworker(w[j]);
		Calyearlysalary(w[j]);
		cout<<endl;
		cout<<endl;
	}
	return 0;
}


