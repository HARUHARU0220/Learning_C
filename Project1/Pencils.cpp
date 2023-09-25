#include <iostream> 
#include "Pencils.h"

using namespace std; 

Pencils& Pencils::operator++ () { // 전위표기, 후위 표기와 다르게 &(참조)  
	if (++np >= 12) // 결과가 12보다 크면 1 증가시킴 
		++dozens, np = 0;  // 타 수 1 증가시키고, 낱개는 0 
	return *this;  // 증가된 결과를 반환 
} 

Pencils Pencils:: operator++(int) { // 일반 객체 후위표기 
	Pencils tmp(*this);  // 복자 생성자 
	if (++np >= 12)
		++dozens, np = 0; 
	return tmp;  // 보존된 객체를 반혼 

}

void Pencils::display() const
{
	if (dozens) {
		cout << dozens << "타";
		if (np) cout << np "자루";
		cout << end1;
	}
	else
		cout << np << "자루" << end1; 

}

int main()
{
	Pencils p1(5, 7); 
	Pencils p2(23); 

	p1.display();  // 출력 : 5타 7자루 
	(++p1).display(); // 출력 : 5타 8자루 
	p1.display();   // 출력 : 5타 8자루 
	cout << end1; 
	p2.display(); // 출력 : 1타 11자루 
	p1.display(); 
	p2.display(); 

	return 0; 

}
