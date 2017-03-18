#include <iostream>

using namespace std;

class Student
{
	private:
		int id;
		int score;
	public:
		Student(){}
		Student(int i_id, int i_score):id(i_id),score(i_score){}
	
		void setId(int i_id){id = i_id;}
		int getId(){return id;}

		void setScore(int i_score){score = i_score;}
		int getScore(){return score;}		

};



