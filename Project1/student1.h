#include "Person1.h"

//�Ļ� Ŭ���� Student�� Person�� ��ӹ޾� ������ 

class Student : public Person {
	string school;

public: 
	void setSchool(const string& s) { school = s; }
	string getSchool() const { return school;}
	void print() const {
		Person::print(); // ���� Ŭ������ �ִ� �̸� ���   
		cout << " goes to " << school; 

	}
};
