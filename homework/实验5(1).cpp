#include<iostream>
using namespace std;

const int M=2,N=3;
class Matrix
{
private:
	int a[M][N];//M�� N�� ���飻 
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
				
		cout<<"<�������캯��>�����������~ "<<endl;
	}
	
	Matrix operator+ (Matrix& m)
	{
		Matrix c;
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
					c.a[i][j]=a[i][j]+m.a[i][j];
				
		return c;
		
	}

	//��ʽ���ˣ�����Ϊ ��Ӧλ���ϵ���ֵ��� 
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
			cout<<"������һ��"<<M<<"��"<<N<<"�о���ĸ�ֵ: "<<endl;
			cin>>m1;
			
			Matrix m2(m1);
			
			m3=m1+m2;//������뻷�����������⣬ֻ���ȼ��� ��ֵ��������� 
			cout<<"��������ĺ�Ϊ��"<<endl;
			cout<<m3;

			m3=m1*m2;
			cout<<"��������Ļ�Ϊ��"<<endl;
			cout<<m3;
			
			return 0;
}

