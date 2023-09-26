#pragma once

#include <iostream>

class Mystring {
	int len; // ���ڿ��� ���� 
	int bufSizel;  // ���� ������ ���ڿ��� ���� 
	char* buf; 
	MyString(int s); // ������ (private) 

public: 
	MyString(); // ����Ʈ ������ 
	MyString(const char* str); //������ 
	MyString(const MyString& mstr);// ��������� 
	MyString(MyString&& mstr); //�̵������� 
	~MyString(); // �Ҹ��� 
	int length() const; // ���ڿ� ���� ��ȯ �޼ҵ� 

};

//��Ʈ�� ��� ������ 

inline std::ostream& operator<<(std::ostream& os, const MyString& mstr) // inline �Լ� : �� ���ڿ� �׷��� �� ��ġ�� ���� �Ǵ� ���·� ������ ��  

{ 
	os << mstr.buf;
	return os; 
}