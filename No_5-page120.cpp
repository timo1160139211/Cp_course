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
	
	cout << "学号"<< " " << "成绩" << endl;
	for(int i=0;i<5;i++)
	{
		cout << " " << (pr+i)->getId() << "   " << (pr + i)->getScore() << endl;
	}

	cout << endl;
	cout << "最高分获得者学号为："<< max(pr,5) << endl;

	return 1;
}

//打擂法求max
int max(Student *q, int num)
{
	//将第一个元素的分数设为擂主：
	int i_id,maxScore = q->getScore();

	q++;
	//从第二个元素开始，比较4次。
	for(int i = 1; i < num; i++,q++)
	{
		//如果分数大于maxScore,擂主变更. !同时将他的id复制给i_id.
		if(q->getScore() > maxScore)
		{
			maxScore = q->getScore();
			i_id = q->getId();
		}
	}

	return i_id;
}