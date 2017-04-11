#include "No_4.h"
#include <iostream>
#include <string>
using namespace std;
Student mini(Student *,int);

int main(void)
{

	Student stu[5] = {
		Student(1,"Zhao1",91),
		Student(2,"Qian2",92),
		Student(3,"Sun3",90),
		Student(4,"Li4",94),
		Student(5,"Wang5",95),
	};
	Student minstu;
	Student *pr=&stu[0];
	
	cout << "学号 "<< "姓名 " << "  成绩" << endl;
	for(int i=0;i<5;i++)
	{
		cout << " " << (pr+i)->getId() << "   " << (pr+i)->getName() << "   " << (pr+i)->getScore() << endl;
	}

	cout << endl;	cout << endl;	cout << endl;
	minstu = mini(pr,5);
	cout << "最低分为："<< minstu.getId()<<"  "<<minstu.getName()<<"  "<< minstu.getScore()<< endl;

	return 1;
}

//打擂法求max
Student mini(Student *q, int num)
{
	//将第一个元素的分数设为擂主：
	int minScore = q->getScore();
	Student minstu;

	q++;
	//从第二个元素开始，比较4次。
	for(int i = 1; i < num; i++,q++)
	{
		//如果分数大于maxScore,擂主变更. !同时将他的id复制给i_id.
		if(q->getScore() < minScore)
		{
			minScore = q->getScore();
			minstu = *q;
		}
	}

	return minstu;
}