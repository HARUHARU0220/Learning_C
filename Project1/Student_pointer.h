#include "Person_pointer.h"

class Student_pointer : public Person_pointer {
	string school; 

public: 
	Student(const string& n, const string& s) :
		Person(n), school(s) { } 
	string getSchool() const { return school; }
	void print() const {
		Person::print(); 
		cout << "goes to " << school; 
	}
};