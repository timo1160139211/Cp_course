#include "No_4-page119.h"
#include <iostream>


using namespace std;

int main(void)
{
	//��� ��1 3 5������Ҳ���� pr, pr+2, pr+4.  
	Student stu[5] = {
		Student(1,91),
		Student(2,92),
		Student(3,93),
		Student(4,94),
		Student(5,95),
	};
	
	Student *pr=&stu[0];

	cout << "ѧ��"<< " " << "�ɼ�" << endl;

	for(int i=0;i<5;i+=2)
	{
		cout << " " << (pr+i)->getId() << "   " << (pr + i)->getScore() << endl;
	}

	//cout << *(pr+i).getId()     error??
	return 1;

}
