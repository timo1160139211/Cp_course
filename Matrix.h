#include <iostream.h>
#include <iomanip>
using namespace std;
class Matrix{

	public:
		Matrix();
		Matrix(int a1,int a2,int a3,int a4,int a5,int a6){
			ma[0][0]=a1;ma[0][1]=a2;ma[0][2]=a3;
			ma[1][0]=a4;ma[1][1]=a5;ma[1][2]=a6;
		}//直接传6个值的构造函数

		friend Matrix operator+(Matrix &a,Matrix &b){	
			Matrix c;
			for(int row=0; row<2; row++){
				for(int col=0; col<3; col++){
					c.ma[row][col] = a.ma[row][col] + b.ma[row][col];
				}
			}
			return c;
		}

		friend display(){
			for(int row=0; row<2; row++){
				for(int col=0; col<3; col++){
					cout << setw(4) << ma[row][col] ;
				}
				cout << endl;
			}//for row
		}//display


	private:
		int ma[2][3];
};
