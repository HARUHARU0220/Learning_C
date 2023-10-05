#ifndef  PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
#include <string>
using namespace std; 

class Person_pointer { // 소멸자 생략 
	string name; 
public : 
	Person_pointer(const string& n) : name(n)
		string getName() const { return name; }
	void print() const { cout << name; } // 상수 

};

#endif // ! PERSON_H_INCLUDED
