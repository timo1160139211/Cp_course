#include "No_5-page120.h"
#include <iostream>

using namespace std;
int max(Student *,int);

int main(void)
{

	Student stu[5] = {
		Student(1,91),
		Student(2,92),
		Student(3,90),
		Student(4,94),
		Student(5,0),
	};
	
	Student *pr=&stu[0];
	
	cout << "ѧ��"<< " " << "�ɼ�" << endl;
	for(int i=0;i<5;i++)
	{
		cout << " " << (pr+i)->getId() << "   " << (pr + i)->getScore() << endl;
	}

	cout << endl;
	cout << "��߷ֻ����ѧ��Ϊ��"<< max(pr,5) << endl;

	return 1;
}

//���޷���max
int max(Student *q, int num)
{
	//����һ��Ԫ�صķ�����Ϊ������
	int i_id,maxScore = q->getScore();

	q++;
	//�ӵڶ���Ԫ�ؿ�ʼ���Ƚ�4�Ρ�
	for(int i = 1; i < num; i++,q++)
	{
		//�����������maxScore,�������. !ͬʱ������id���Ƹ�i_id.
		if(q->getScore() > maxScore)
		{
			maxScore = q->getScore();
			i_id = q->getId();
		}
	}

	return i_id;
}