#include<iostream>
using namespace std;

const int M=2,N=3;
class Matrix
{
private:
	int a[M][N];//M行 N列 数组； 
public:
	Matrix()
	{
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
				a[i][j]=0;
	}
	
	Matrix(const Matrix& ma)
	{
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
				a[i][j]=ma.a[i][j];
				
		cout<<"<拷贝构造函数>拷贝矩阵完成~ "<<endl;
	}
	
	Matrix operator+ (Matrix& m)
	{
		Matrix c;
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
					c.a[i][j]=a[i][j]+m.a[i][j];
				
		return c;
		
	}

	//公式忘了，假设为 对应位置上的数值相乘 
	Matrix operator* (Matrix& ma)
	{
		Matrix c;
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
					c.a[i][j]=a[i][j] * ma.a[i][j];

		return c;
	}


	friend ostream& operator<< (ostream &output ,Matrix &m)
	{
		for(int i=0;i<M;i++)
		{
			for(int j=0;j<N;j++)
				output<<m.a[i][j]<<"    ";

			output<<endl;
		}

		return output;
	}

	friend istream& operator>> (istream &input,Matrix &m)
	{
			for(int i=0;i<M;i++)
				for(int j=0;j<N;j++)
					input>>m.a[i][j];
			return input;
	}
};

		
int main()
		{
	        Matrix m1,m3;
			cout<<"请输入一个"<<M<<"行"<<N<<"列矩阵的各值: "<<endl;
			cin>>m1;
			
			Matrix m2(m1);
			
			m3=m1+m2;//这个编译环境重载有问题，只能先计算 赋值，再输出。 
			cout<<"两个矩阵的和为："<<endl;
			cout<<m3;

			m3=m1*m2;
			cout<<"两个矩阵的积为："<<endl;
			cout<<m3;
			
			return 0;
}

