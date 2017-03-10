#include <iostream>

using namespace std;
template <typename T>


T getMax(T,T);
inline void swapR(T &a,T &b);
inline void swapP(T &a,T &b);

int main(void){
    int i,j,imax,sum;

    cout << "1.输出两者的最大值：" << endl;
    cout << "请输入两个整数:" << endl;
    cin >> i >> j;
    cout << "两者的最大值为： " << getMax(i,j) << endl;
    cout << " " << endl;

    cout << "2.(引用)交换两值：" << endl;
    swapR(i,j);
    cout << i << "  " << j << endl;
    cout << " " << endl;

    cout << "3.(指针)再次交换两值：" << endl;
    swapP(i,j);
    cout << i << "  " << j << endl;
    cout << " " << endl;

    return 0;
}

//返回两者的最大值
T getMax(T a=1,T b=0){
    return a>=b?a:b;
}

//(引用)交换两者顺序
inline void swapR(T &a,T &b){
    T temp;

    temp = a;
    a = b;
    b = temp;
}

//(指针)交换
inline void swapR(T *a,T *b){
    T temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
