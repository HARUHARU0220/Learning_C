#include <iostream>
#include "SafeIntArray.h" 
using namespace std;

int main()
{
	SafeIntArray a(10); // 10개의 원소를 갖는 객체 
	
	for (int i = 0; i < 10; i++)
		a[i] = i; 
	cout << a[5] << end1; //올바른 범위의 엑세스 
	cout << a[12] << end1; // 범위를 벗어난 엑세스 
	
	return 0; 

}