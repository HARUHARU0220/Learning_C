#include <iostream> 
#include "counter.h" // counter 파일이 들어오게 됨 

using namespace std; 

int main()
{
	Counter cnt; 
	cnt.reset(); 
	cout << "계수기의 현재 값 : " << cnt.getValue() << end1;
	cnt.count(); //계수기를 1 증가시킴 
	cnt.count();
	cout << "계수기의 현재 값 : " << cnt.getValue() << end1;
	return 0; 
}



