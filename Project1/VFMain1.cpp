#include  <iostream> 

using namespace std; 

#include "VecF.h"

int main()
{ 
	float a[3] = { 1, 2, 3 }; 
	VecF		v1(3, a); // 1, 2, 3  저장하는 벡터 
	VecF		v2(v1);  // v1 복사하여 v2 만듦 
	v1.print();
	cout << end1; 
	v2.print(); 
	cout << end1;
	return 0; 

} 