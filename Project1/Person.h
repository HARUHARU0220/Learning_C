#ifndef COUNTER_H_INCLUDED  
#define COUNTER_H_INCLUDED 

class Person { // Ŭ���� person ������ ���� 
	char* name;  // �̸��� �����ϴ� ������ ��� 
	char* addr; // �ּҸ� �����ϴ� ������ ��� 

public:  // public ����Լ� 
	Person(const char* name, const char* addr);  
	~Person();  // �Ҹ��� 

	void print() const; // �̸��� �ּ� ��� 
	void chAddr(const char* newAddr);  // �ּҺ��� 
};

#endif // PERSON_H_INCLUDED 
