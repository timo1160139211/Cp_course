#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

/* &&&&&&&&&&  对象数组           &&&&&&&&&&    2016-12-13

#include "Coordinate.h"

///////////////////////////////////////////////////////////
//  对象数组:                                            //
//      定义 Coordinate 类                               //
//      数据成员:m_iX, m_iY                              //
//      分别从 栈中 堆中 实例化长度为3的对象数组         //
//      给数组中的7元素分别赋值                          //
//      遍历两个数组                                     //
///////////////////////////////////////////////////////////

int main(void){
    Coordinate coor[3];//栈中实例化
    coor[0].m_iX = 3;
    coor[0].m_iY = 5;

    Coordinate *p = new Coordiante[3];//堆中实例化
    p->m_iX = 7;
    p[0].m_iY = 9;

    p++;// p+=1; 指向第二个数组对象
    p->m_iX = 11;
    p[0].m_iY = 13; //实际上都是操作的第二个对象








}





/////////////////Coordinate.h/////////////////////////////
class Coordinate{
    public:
        Coordinate();
        ~Cooedinate();
        int m_iX;
        int m_iY;

}


/////////////////Coordinate.cpp///////////////////////////
#include <iostream>
#include "Coordinate.h"

using namespace std;

Coordinate::Coordinate(){
    cout << "Coordinate()" << endl;
}

Coordinate::~Coordinate(){
    cout << "~Coordiante()" << endl;
}

*/

/* &&&&&&&&&&  封装(上) 总复习    &&&&&&&&&&    2016-12-13
///////////////////////////////////////////////////////////
//  定义类：Student                                      //
//      数据成员：m_strName                              //
//      无参构造函数：Student()                          //
//      有参构造函数：Student(string _name)              //
//      拷贝构造函数：Student(const Student& stu)        //
//      析构函数：~Student()                             //
//      数据成员函数：setName(string _name)、getName()   //
///////////////////////////////////////////////////////////


#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        //无参构造函数
        Student(){
            m_strName = "";
        }

        //有参构造函数
        Student(string _name){
            m_strName = _name;
        }

        //拷贝构造函数
        Student(const Student& stu){};

        //析构函数
        ~Student(){};

        void setName(string);
        string getName();

    private:
        string m_strName;
};

void Student::setName(string _name){
    m_strName = _name;
}

string Student::getName(){
    return m_strName;
}

int main(void)
{
    // 通过new方式实例化对象*stu
    Student *stu = new Student();
    // 更改对象的数据成员为“慕课网”
	stu->setName("慕课网");
    // 打印对象的数据成员
	std::cout << stu->getName() << std::endl;
	delete stu;
    stu = NULL;

    return 0;
}

*/

/* &&&&&&&&&&  拷贝构造函数 例    &&&&&&&&&&    2016-10-28

///////////////////////////////////////////////////////////////////////////
//题目描述：定义一个Teacher类，要求分别采用同文件类外定义                //
//    数据成员：                                                         //
//      1.名字                                                           //
//      2.年龄                                                           //
//      3.性别                                                           //
//    成员函数：                                                         //
//      1.数据成员的封装函数                                             //
//      2.授课 teach                                                     //
///////////////////////////////////////////////////////////////////////////

class Teacher{
    public:
        Teacher(string name = "jim",int age = 18);

        //拷贝函数声明
        Teacher(const Teacher &tea);

        string getName();
        string getGender();
        int getAge();

        void setName(string name);
        void setGender(string gender);
        void setAge(int age);

        void teach();
    private:
        string m_strName;
        string m_strGender;
        int m_iAge;
};
//构造函数定义
Teacher::Teacher(string name,int age):m_strName(name),m_iAge(age){
    cout << "Teacher(string name,int age)" << endl;
}

//拷贝构造函数
Teacher::Teacher(const Teacher &tea){

}

string Teacher::getName(){
    return m_strName;
}

string Teacher::getGender(){
    return m_strGender;
}

int Teacher::getAge(){
    return m_iAge;
}

void Teacher::setName(string name){
    m_strName = name;
}

void Teacher::setGender(string gender){
    m_strGender = gender;
}

void Teacher::setAge(int age){
    m_iAge = age;
}

void Teacher::teach(){
    cout << "Now class is beginning ... " << endl;
}

int main(){
    Teacher t;
    t.setName("kongfuzi");
    t.setGender("male");
    t.setAge(40);
    cout << t.getName() << " " << t.getGender() << " " << t.getAge() << endl;
    t.teach();

    return 0;
}

*/

/* &&&&&&&&&&  拷贝构造函数       &&&&&&&&&&    2016-10-28
//如果没有自定义的拷贝构造函数，则系统会自动生成一个默认的拷贝构造函数。
//当采用直接初始化或复制初始化实例化对象的时候，系统自动调用拷贝构造函数。

class Student{
    public:
        Student(){
            cout << "Student constructor called !" ;
        }
    private:
        string m_strName;
};

int main(void){
    Student stu1;
    Student stu2 = stu1;
    Student stu3(stu2);

    return 0;

}

*/

/* &&&&&&&&&&  初始化列表 & 例    &&&&&&&&&&    2016-10-28
///////////////////////////////////////////////////////////////////////////
//题目描述：定义一个Teacher类，要求分别采用同文件类外定义                   //
//    数据成员：                                                          //
//      1.名字                                                            //
//      2.年龄                                                            //
//      3.性别                                                            //
//    成员函数：                                                          //
//      1.数据成员的封装函数                                               //
//      2.授课 teach                                                      //
//    扩展 ：                                                             //
//      1.定义可以带最多学生的个数，此量为常量                              //
////////////////////////////////////////////////////////////////////////////

class Teacher{
    public:
        //构造函数声明
        Teacher(string name = "default",int age = 20,int m = 100);

        string getName();
        string getGender();
        int getAge();
        int getMax();

        void setName(string name);
        void setGender(string gender);
        void setAge(int age);

        void teach();
    private:
        string m_strName;
        string m_strGender;
        int m_iAge;
        const int m_iMax;
};

//构造函数 类外定义,因为已经在声明的时候给出了 默认值，此处不必再写一遍
//const 只能由初始化列表的方式来赋值。
Teacher::Teacher(string name,int age,int m):m_strName(name),m_iAge(age),m_iMax(m){

    cout << "Teacher(string name,int age) " << endl;

    //在初始化列表中 已经初始化，代替此处的赋值。
    //m_strName = name;
    //m_iAge = age;
}


string Teacher::getName(){
    return m_strName;
}

string Teacher::getGender(){
    return m_strGender;
}

int Teacher::getAge(){
    return m_iAge;
}

int Teacher::getMax(){
    return m_iMax;
}

void Teacher::setName(string name){
    m_strName = name;
}

void Teacher::setGender(string gender){
    m_strGender = gender;
}

void Teacher::setAge(int age){
    m_iAge = age;
}

void Teacher::teach(){
    cout << "Now class is beginning ... " << endl;
}

int main(){
    Teacher t1("marry",18,99);
    cout << t1.getName() << " " << t1.getAge() << " "<< t1.getMax() << endl;


    return 0;
}

*/

/* &&&&&&&&&&  初始化列表         &&&&&&&&&&    2016-10-28
//初始化的时候默认的构造一串数据
//形如 Student():m_strName("Jim"){}
//  注意！
//      特性:1.初始化列表先于构造函数执行。
//           2.初始化列表只能用于构造函数！
//           3.初始化列表可以同时初始化多个数据成员。

class Student{
    public:
        Student():m_strName("default"),m_iAge(10){}
    private:
        string m_strName;
        int m_iAge;
};


//问：构造函数 与 初始化列表岂不冲突？？
//答：非也。 例:
class Circle{
    public:
        //Circle(){m_dPi = 3.14}   //错误！ 因为 m_dPi 为 const (常量)，构造之后不可二次修改！
        Circle():m_dPi(3.14){}     //正确！ 因为 初始化列表 优先于 构造函数运算。
    private:
        double m_dPi;
};

*/

/* &&&&&&&&&&  默认构造函数       &&&&&&&&&&    2016-10-28
//默认的无参构造函数在不写的情况下由编译器自己生成。

class Student{
    public:
        Student(){}
        Student(string name = "default"){}
    private:
        string m_strName;
};

int maim(void){
    Student stu1();
    Student *p = NULL;
    p = new Student();

    delete p;
    p = NULL;
    return 0;
}

*/

/* &&&&&&&&&&  构造函数  实例     &&&&&&&&&&    2016-10-23

class Teacher{
    public:
        Teacher(){
            m_strName = "yehaizi";
            m_strGender = "unknown";
            m_iAge = 10;
        }

        Teacher(string name,string gender,int age){
            m_strName = name;
            m_strGender = gender;
            m_iAge = age;
        }

        string getName();
        string getGender();
        int getAge();

        void setName(string name);
        void setGender(string gender);
        void setAge(int age);

        void teach();

        void printMe(){
            cout << " Name   : " << m_strName << endl;
            cout << " Gender : " << m_strGender << endl;
            cout << " Age    : " << m_iAge << endl;
        }

    private:
        string m_strName;
        string m_strGender;
        int m_iAge;
};

string Teacher::getName(){
    return m_strName;
}

string Teacher::getGender(){
    return m_strGender;
}

int Teacher::getAge(){
    return m_iAge;
}

void Teacher::setName(string name){
    m_strName = name;
}

void Teacher::setGender(string gender){
    m_strGender = gender;
}

void Teacher::setAge(int age){
    m_iAge = age;
}

void Teacher::teach(){
    cout << "Now class is beginning ... " << endl;
}

int main(){
    Teacher t;
    t.printMe();

    Teacher t1("qipa","famale",20);
    t1.printMe();

    return 0;
}
*/

/* &&&&&&&&&&  构造函数           &&&&&&&&&&    2016-10-23
//栈区  :  int x = 0;   int *p = NULL;    ！内存由系统自动管理。
//堆区  :  int *p = new int[20];          ！自己管理。
//全局区:  储存全局变量及静态变量。
//常量区:  string str = "hello";
//代码区:  储存罗技代码的二进制。

//构造函数无返回值！ 可以重载！

class Student{
    public:
        Student(){m_strName = "Morpheus";}
        Student(string name){m_strName = name;}
    private:
        string m_strName;
};

*/

/* &&&&&&&&&&  分文件 类外定义 例 &&&&&&&&&&    2016-10-23
&&&&&&&& Teacher.h &&&&&&&&
#include <string>
using namespace std;

class Teacher{
    public:
        string getName();
        string getGender();
        int getAge();

        void setName(string name);
        void setGender(string gender);
        void setAge(int age);

        void teach();
    private:
        string m_strName;
        string m_strGender;
        int m_iAge;
};



&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&& Teacher.cpp &&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include "Teacher.h"
#include <iostream>
using namespace std;

string Teacher::getName(){
    return m_strName;
}

string Teacher::getGender(){
    return m_strGender;
}

int Teacher::getAge(){
    return m_iAge;
}

void Teacher::setName(string name){
    m_strName = name;
}

void Teacher::setGender(string gender){
    m_strGender = gender;
}

void Teacher::setAge(int age){
    m_iAge = age;
}

void Teacher::teach(){
    cout << "Now class is beginning ... " << endl;
}


&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&& learnC++.cpp &&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

int main(){
    Teacher t;
    t.setName("kongfuzi");
    t.setGender("male");
    t.setAge(40);
    cout << t.getName() << " " << t.getGender() << " " << t.getAge() << endl;
    t.teach();

    return 0;
}
*/

/* &&&&&&&&&&  同文件 类外定义 例 &&&&&&&&&&    2016-10-23

///////////////////////////////////////////////////////////////////////////
//题目描述：定义一个Teacher类，要求分别采用同文件类外定义                //
//    数据成员：                                                         //
//      1.名字                                                           //
//      2.年龄                                                           //
//      3.性别                                                           //
//    成员函数：                                                         //
//      1.数据成员的封装函数                                             //
//      2.授课 teach                                                     //
///////////////////////////////////////////////////////////////////////////

class Teacher{
    public:
        string getName();
        string getGender();
        int getAge();

        void setName(string name);
        void setGender(string gender);
        void setAge(int age);

        void teach();
    private:
        string m_strName;
        string m_strGender;
        int m_iAge;
};

string Teacher::getName(){
    return m_strName;
}

string Teacher::getGender(){
    return m_strGender;
}

int Teacher::getAge(){
    return m_iAge;
}

void Teacher::setName(string name){
    m_strName = name;
}

void Teacher::setGender(string gender){
    m_strGender = gender;
}

void Teacher::setAge(int age){
    m_iAge = age;
}

void Teacher::teach(){
    cout << "Now class is beginning ... " << endl;
}

int main(){
    Teacher t;
    t.setName("kongfuzi");
    t.setGender("male");
    t.setAge(40);
    cout << t.getName() << " " << t.getGender() << " " << t.getAge() << endl;
    t.teach();

    return 0;
}


*/

/* &&&&&&&&&&  分文件 类外定义    &&&&&&&&&&    2016-10-21
@@@@@@@@ Car.h @@@@@@@@
class Car{
    public:
        void run();
        void stop();
        void changeSpeed();
};

@@@@@@@@ Car.cpp @@@@@@@@
#include "Car.h"
void Car::run(){}
void Car::stop(){}
void Car::changeSpeed(){}

*/

/* &&&&&&&&&&  同文件 类外定义    &&&&&&&&&&    2016-10-21
@@@@@@@@ Car.cpp @@@@@@@@

class Car{
    public:
        void run();
        void stop();
        void changeSpeed();
};

void Car::run(){}
void Car::stop(){}
void Car::changeSpeed(){}

*/

/* &&&&&&&&&&  数据的封装  例     &&&&&&&&&&    2016-10-21

//////////////////////////////////////////////////////
//  定义类：Student                                 //
//  数据成员：m_strName                             //
//  数据成员的封装函数：setName()、getName()        //
//////////////////////////////////////////////////////


class Student
{
public:
    // 定义数据成员封装函数setName()
    void setName(string name){
        m_strName = name;
    }

    // 定义数据成员封装函数getName()
    string getName(){
        return m_strName;
    }

//定义Student类私有数据成员m_strName
private:
    string m_strName;
};

int main()
{
    // 使用new关键字，实例化对象
	Student *str = new Student();
    // 设置对象的数据成员
	str->setName("慕课网");
    // 使用cout打印对象str的数据成员
    cout << str->getName() << endl; // 千万不能 加 ';'  cout << str->getName(); << endl;
    // 将对象str的内存释放，并将其置空
	delete str;
	str = NULL;

	return 0;
}

*/

/* &&&&&&&&&&  数据的封装         &&&&&&&&&&    2016-10-21
///////////////////////////////////////////////////////////////////////////
//  定义一个Student类，含有如下信息                                      //
//      1.姓名：name;                                                    //
//      2.性别：gender;                                                  //
//      3.学分（只读）：score;                                           //
//      4.学习：study();                                                 //
///////////////////////////////////////////////////////////////////////////


class Student{
    public:
        void initScore(){
            m_iScore = 0;
        }

        void study(int score){
            m_iScore += score;
        }

        void setName(string name){
            m_strName = name;
        }

        void setGender(string gender){
            m_strGender = gender;
        }

        string getName(){
            return m_strName;
        }

        string getGender(){
            return m_strGender;
        }

        int getScore(){
            return m_iScore;
        }

    private:
        string m_strName;
        string m_strGender;
        int m_iScore;
};


int main(void){
    Student stu;
    stu.initScore();
    stu.setName("zhangsan");
    stu.setGender("女");
    stu.study(5);
    stu.study(3);

    cout << "Name     " << " Gender " << "学分" << endl;
    cout << stu.getName() << "  " << stu.getGender() << "     " << stu.getScore() << endl;

    return 0;
}
*/

/* &&&&&&&&&&  单元巩固           &&&&&&&&&&    2016-10-21

//  定义类：Student
//  数据成员：名字、年龄

class Student
{
public:
    // 定义数据成员名字 m_strName 和年龄 m_iAge
    string m_strName;
    int m_iAge;
};

int main()
{
    // 实例化一个Student对象stu
    Student stu;
    // 设置对象的数据成员
    stu.m_strName = "慕课网";
    stu.m_iAge = 2;

    // 通过cout打印stu对象的数据成员
    cout << stu.m_strName << " " << stu.m_iAge << endl;
    return 0;
}

*/

/* &&&&&&&&&&  string 应用练习    &&&&&&&&&&    2016-10-21

///////////////////////////////////////////////////////////////////////////
//  题目描述：                                                           //
//      1.提示用户输入姓名;                                              //
//      2.接收用户的输入;                                                //
//      2.5如果用户直接输入回车，那么告诉用户输入为空;                   //
//      3.然后向用户问好： Hello xxx;                                    //
//      4.告诉用户名字的长度;                                            //
//      5.告诉用户名字的首字母是什么;                                    //
//      6.如果用户输入的是 Morpheus ，那么告诉用户的身份是一个管理员;    //
///////////////////////////////////////////////////////////////////////////

int main(){
    string name;
    cout << "Plase input your first name : " << endl;               // 1.
    getline(cin, name);                                             // 2.       参数类型大概是： input 方式 ，字符串名
    if(name.empty()){                                               // 2.5
        cout << "You input nothing ! "<< endl;
        return 0;
    }
    cout << "Hello " + name << endl;                                // 3
    cout << "Your name's length is : " << name.size() << endl;      // 4   注意！ 此处 不可以用 '+' 来 连接！ 返回值类型！
    cout << "Your name's first letter is :" << name[0] << endl;     // 5           此处亦不可用！！
    if(name == "Morpheus"){
        cout << "You are a administrator ! Welcome !" << endl;      // 6
    }
    return 0;
}
*/

/* &&&&&&&&&&  类和对象 例子      &&&&&&&&&&    2016-10-21
class Demo{
    public:
        int x;
        int y;

        void printXY(){
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
};

int main(){
    Demo demo;  //通过 栈 自动管理内存。
    demo.x = 10;
    demo.y = 20;
    demo.printXY();

    // 通过 堆 申请内存 需要自行管理内存。 也就是 new & delete 成對出现。
    Demo *d = new Demo();
    if(d == NULL){
        cout << "申请内存失败" << endl;
        return 0;
    }
    d->x = 12614;
    d->y = 76542;
    d->printXY();
    delete d;
    d = NULL;

    return 0;
}
*/

/* &&&&&&&&&&  类 和 对象         &&&&&&&&&&    2016-10-21
//注意！class定义之后 需要加 ';'

//从 栈 中实例化类 自动管理内存。
class TV{
public:
    char name[20];
    int type;

    void changeVol();
    void power();
};

int main(void){
    TV tv;
    TV tv[20];
    return 0;
}


//从 堆 中实例化类 需要自行管理内存。
class TV{
    public:
        char name[20];
        int type;

        void changeVol();
        void power();
};

int main(void)
{
    TV *p = new TV();
    TV *q = new TV[20];
    //todo
    delete p;
    delete []q;
    p = NULL;
    q = NULL;
    return 0;
}
*/

/* &&&&&&&&&&  单元 巩固          &&&&&&&&&&    2016-10-21

int main(void)
{
    //在堆中申请100个char类型的内存
    char *str = new char[100];
    //拷贝Hello C++字符串到分配的堆中的内存中
	strcpy(str , "Hello imooc");
    //打印字符串
    cout << str << endl;
    //释放内存
	delete []str;
    str = NULL;
	return 0;
}
*/

/* &&&&&&&&&&  内存管理           &&&&&&&&&&    2016-10-21
//  C 语言   void *malloc(size_t size);     void free()void *memblock);
//  C ++     new int arr[10];               delete []arr;

int main(void){
    int *p = new int(20); //申请内存的同时 初始化。
//  int *p = new int[1000];
    if(p == NULL){
        return 0;
    }
    cout << *p << endl;
    delete p;
//  delete []p; // 注意！一定要 []p 否则只能释放第一个！
    p = NULL;
    return 0;
}

*/

/* &&&&&&&&&&  章节 测试          &&&&&&&&&&    2016-10-21

 //
 //函数功能：返回a和b的最大值
 //a和b是两个整数
 //
int getMax(int a, int b)
{
    return a > b ? a : b;
}

 //
 // 函数功能：返回数组中的最大值
 // arr：整型数组
 // count：数组长度
 // 该函数是对上面函数的重载
 //
int getMax(int *arr,int count)
{
    //定义一个变量并获取数组的第一个元素
    int maxNum = arr[0];
	for(int i = 1; i < count; i++)
	{
        //比较变量与下一个元素的大小
		if(arr[i] > maxNum)
		{
            //如果数组中的元素比maxNum大，则获取数组中的值
			maxNum = arr[i];
		}
	}
	return maxNum;
}

int main(void)
{
    //定义int数组并初始化
	int numArr[3] = {3, 8, 6};

    //自动调用int getMax(int a, int b)
	cout << getMax(numArr[0],numArr[2]) << endl;

    //自动调用返回数组中最大值的函数返回数组中的最大值
	cout << getMax(numArr, 3)  << endl;
	return 0;
}

*/

/* &&&&&&&&&&  内联函数           &&&&&&&&&&    2016-10-20
inline int getMax(int a, int b, int c){
    int m = a;
    if(b > a && b > c) m = b;
    else if(c > b && c > a) m = c;
    return m;
}

int main(){
    int i = 10, j = 20, k = 30, m;
    m = getMax(i,j,k);
    cout << "max = " << m << endl;
    return 0;
}
//  ！
//  注意：1.建议编译器使用内联函数，实际还是由 编译器决定。
//        2.递归函数 不可以使用 内联。
*/

/* &&&&&&&&&&  函数的 重载        &&&&&&&&&&    2016-10-20

int getMax(int i,int j,int k = 10){
    //to do
}
double getMax(double x,double y){
    //to do
}
*/

/* &&&&&&&&&&  函数的 默认值      &&&&&&&&&&    2016-10-20


//void fun(int i,int j = 5,int k);//是不行的，参数的默认值(初始值) 必须放在最右端！

//void fun(int i,int j = 5,int k = 10);
//fun(20)       ==> fun(20,5,10)
//fun(20,21)    ==> fun(20,21,10)
*/

/* &&&&&&&&&&  const * & fun()    &&&&&&&&&&    2016-10-19

void fun(const int &a,const int &b){
    a = 10;
    b = 20;     //是不行的。不让赋值回去。  取消掉 const 是可以影响原值的。
}


int main(void){
    int x = 3;
    int y = 5;

//    int const* p = &x;
//    *p = 5;     //错！  *p 是 const 没权限直接修改其指向的 变量的值。

//    int *const p = &x;
//    p = &y;   // 错！    exception : assignment of read-only location 'y'

//    x = 10;    // 成立。  也就是 *const 紧跟着的 p 不可重新指向其他 地址。  但是 *p 指向的变量 可以通过 *p 重新赋值。

//    int const &z = x;
//    z = 10;  // 错！      exception : assignment of read-only reference 'z'

    cout << x << endl;
    cout << y << endl;
    cout << *p << endl;
}
*/

/* &&&&&&&&&&  cout cin << >>     &&&&&&&&&&    2016-10-18


void fun(int &a,int &b){   // 传入 '&a' 时 函数带回的返回值 可能不只一个。
    int c = 0;
    c = a;
    a = b;
    b = c;

}

int main(void){
    int x = 10;
    int y = 20;

    cout << x << "," << y << endl;
    fun(x,y);
    cout << x << "," << y << endl;
    fun(x,y);
    cout << x << "," << y << endl;
}
*/
