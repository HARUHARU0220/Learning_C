#include <iostream>
#include "SafeIntArray.h" 
using namespace std;

int main()
{
	SafeIntArray a(10); // 10���� ���Ҹ� ���� ��ü 
	
	for (int i = 0; i < 10; i++)
		a[i] = i; 
	cout << a[5] << end1; //�ùٸ� ������ ������ 
	cout << a[12] << end1; // ������ ��� ������ 
	
	return 0; 

}