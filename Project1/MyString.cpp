// 클래스 데이터 저장할 수 있는 개수만 매개 변수로 받아서 그만큼의 메모리만 확보를 하는 생성자 

#include <iostream>
#include <cstring>
#include "MyString.h"

Mystring::MyString(int s) : len(s), bufSize(s) { // private 생성자 
	buf = new char[s + 1]; 
	buf[s] = '\0'; 

}

Mystring::MyString() : len(0), bufSize(0) // 디폴트 생성자  

{
	buf = new char[1];
	buf[0] = '\0';

}

Mystring::Mystring(const char* str) // 생성자 
{
	len = bufSize = strlen(str); // 문자열 길이  
	buf = new char[len + 1];  // 문자열 저장공간 
	strcpy(buf, str); // 문자열 복사  
} 

Mystring::MyString(const MyString& mstr) // 복사 생성자/ 메모리 확보해서 strcpy 명령으로 복사 
	: len(mstr.len), bufSize(mstr.len)
{
	buf = new char[len + 1]; 
	strcpy(buf, mstr.buf); 
}



