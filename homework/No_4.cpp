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
	
	cout << "ѧ�� "<< "���� " << "  �ɼ�" << endl;
	for(int i=0;i<5;i++)
	{
		cout << " " << (pr+i)->getId() << "   " << (pr+i)->getName() << "   " << (pr+i)->getScore() << endl;
	}

	cout << endl;	cout << endl;	cout << endl;
	minstu = mini(pr,5);
	cout << "��ͷ�Ϊ��"<< minstu.getId()<<"  "<<minstu.getName()<<"  "<< minstu.getScore()<< endl;

	return 1;
}

//���޷���max
Student mini(Student *q, int num)
{
	//����һ��Ԫ�صķ�����Ϊ������
	int minScore = q->getScore();
	Student minstu;

	q++;
	//�ӵڶ���Ԫ�ؿ�ʼ���Ƚ�4�Ρ�
	for(int i = 1; i < num; i++,q++)
	{
		//�����������maxScore,�������. !ͬʱ������id���Ƹ�i_id.
		if(q->getScore() < minScore)
		{
			minScore = q->getScore();
			minstu = *q;
		}
	}

	return minstu;
}