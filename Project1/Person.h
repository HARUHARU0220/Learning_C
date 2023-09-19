#ifndef COUNTER_H_INCLUDED  
#define COUNTER_H_INCLUDED 

class Person { // 클래스 person 선언의 시작 
	char* name;  // 이름을 저장하는 데이터 멤버 
	char* addr; // 주소를 저장하는 데이터 멤버 

public:  // public 멤버함수 
	Person(const char* name, const char* addr);  
	~Person();  // 소멸자 

	void print() const; // 이름과 주소 출력 
	void chAddr(const char* newAddr);  // 주소변경 
};

#endif // PERSON_H_INCLUDED 
