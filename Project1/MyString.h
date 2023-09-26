#pragma once

#include <iostream>

class Mystring {
	int len; // 문자열의 길이 
	int bufSizel;  // 저장 가능한 문자열의 길이 
	char* buf; 
	MyString(int s); // 생성자 (private) 

public: 
	MyString(); // 디폴트 생성자 
	MyString(const char* str); //생성자 
	MyString(const MyString& mstr);// 복사생성자 
	MyString(MyString&& mstr); //이동생성자 
	~MyString(); // 소멸자 
	int length() const; // 문자열 길이 반환 메소드 

};

//스트림 출력 연산자 

inline std::ostream& operator<<(std::ostream& os, const MyString& mstr) // inline 함수 : 이 문자에 그래도 그 위치에 들어가게 되는 형태로 번역이 됨  

{ 
	os << mstr.buf;
	return os; 
}