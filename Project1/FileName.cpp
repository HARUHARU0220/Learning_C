#include <iostream> 
#include "counter.h" // counter ������ ������ �� 

using namespace std; 

int main()
{
	Counter cnt; 
	cnt.reset(); 
	cout << "������� ���� �� : " << cnt.getValue() << end1;
	cnt.count(); //����⸦ 1 ������Ŵ 
	cnt.count();
	cout << "������� ���� �� : " << cnt.getValue() << end1;
	return 0; 
}



