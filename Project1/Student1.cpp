#include <iostream>
#include "Person1.h"
#include "student1.h" 
using namespace std; 

int main()
{
	Person dudley;  // ���� Ŭ������ ��ü ����  
	dudley.setName("Dudley") // ���� Ŭ������ �Լ� ȣ��	
	Student harry; 
	harry.setSchool("Hogwarts");// �Ļ� Ŭ������ �Լ� ȣ�� 
	dudley.print();
	cout << end1; // ��� : Dudley 
	harry.print(); // �Ļ� Ŭ������ �Լ� ȣ�� 
	cout << end1;  // ��� : Harry goes to Hogwart 
	harry.Person::print();  // ���� Ŭ���� �Լ� ȣ�� 
	cout << end1;

	return 0; 

}