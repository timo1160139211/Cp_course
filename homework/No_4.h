/**
 * No_4.h
 */
#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		int id;
		int score;
		string name;
	public:
		Student(){}
		Student(int i_id, string s_name, int i_score):id(i_id),name(s_name),score(i_score){}
	
		void setId(int i_id){id = i_id;}
		int getId(){return id;}

		void setName(string s_name){name = s_name;}
		string getName(){return name;}

		void setScore(int i_score){score = i_score;}
		int getScore(){return score;}		

};

