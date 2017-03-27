#include <iostream.h>
#include <iomanip>
#include "Matrix.h"
using namespace std;

int main(){	
	
	Matrix a(1,2,3,4,5,6);
	Matrix b(1,2,3,4,5,6);

	Matrix c=a+b;
	c.display();


    return 0;
}

