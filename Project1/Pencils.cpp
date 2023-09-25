#include <iostream> 
#include "Pencils.h"

using namespace std; 

Pencils& Pencils::operator++ () { // ����ǥ��, ���� ǥ��� �ٸ��� &(����)  
	if (++np >= 12) // ����� 12���� ũ�� 1 ������Ŵ 
		++dozens, np = 0;  // Ÿ �� 1 ������Ű��, ������ 0 
	return *this;  // ������ ����� ��ȯ 
} 

Pencils Pencils:: operator++(int) { // �Ϲ� ��ü ����ǥ�� 
	Pencils tmp(*this);  // ���� ������ 
	if (++np >= 12)
		++dozens, np = 0; 
	return tmp;  // ������ ��ü�� ��ȥ 

}

void Pencils::display() const
{
	if (dozens) {
		cout << dozens << "Ÿ";
		if (np) cout << np "�ڷ�";
		cout << end1;
	}
	else
		cout << np << "�ڷ�" << end1; 

}

int main()
{
	Pencils p1(5, 7); 
	Pencils p2(23); 

	p1.display();  // ��� : 5Ÿ 7�ڷ� 
	(++p1).display(); // ��� : 5Ÿ 8�ڷ� 
	p1.display();   // ��� : 5Ÿ 8�ڷ� 
	cout << end1; 
	p2.display(); // ��� : 1Ÿ 11�ڷ� 
	p1.display(); 
	p2.display(); 

	return 0; 

}
