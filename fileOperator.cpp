#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

int main()
{
/*	FILE *fp = fopen("1.txt","w");
	for(int i =0; i<10; i++)
	{
		fprintf(fp,"%d\n",i);
	}
	
	fclose(fp);*/
	
/*	FILE *fp = fopen("1.txt","r");
	if(fp == NULL)
	{
		cout<<"No File"<<endl;
	}
	int a;
	while(feof(fp)==NULL)
	{
	fscanf(fp,"%d\n",&a);
	cout<<a<<endl;
	}
	fclose(fp);*/

	int a;
	ifstream file2("1.txt",ios::out);
	while(file2.eof()==NULL)
	{
		file2>>a;
		cout<<a<<endl;
	}
	file2.close();

	/*ofstream file;
	file.open("2.txt",ios::in);
	for(int i = 0; i<10; i++)
	{
		file<<i<<endl;
	}
	file.close();*/

	return 1;
}