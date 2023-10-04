#include <iostream>
#include "Person1.h"
#include "student1.h" 
using namespace std; 

int main()
{
	Person dudley;  // 기초 클래스의 객체 선언  
	dudley.setName("Dudley") // 기초 클래스의 함수 호출	
	Student harry; 
	harry.setSchool("Hogwarts");// 파생 클래스의 함수 호출 
	dudley.print();
	cout << end1; // 출력 : Dudley 
	harry.print(); // 파생 클래스의 함수 호출 
	cout << end1;  // 출력 : Harry goes to Hogwart 
	harry.Person::print();  // 기초 클래스 함수 호출 
	cout << end1;

	return 0; 

}