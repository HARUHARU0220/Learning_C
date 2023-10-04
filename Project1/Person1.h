
#ifndef PERSON1_H_INCLUDED
#define PERSON1_H_INCLUDED
#include <iostream>
#include <string>
using namespace std; 

class Person { // 기초 클래스 작성 
	string name; // 데이터 멤버 선언, 가시성 지시하지 않음 

public: 
	void setName(const string& n) { name = n; }
	string getName() const { return name; } // getName 데이터 멤버 읽기만 함 
	void print() const { cout << name; } // 이름 출력 
};

#endif // PERSON1_H_INCLUDED