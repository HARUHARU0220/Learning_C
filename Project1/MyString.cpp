// Ŭ���� ������ ������ �� �ִ� ������ �Ű� ������ �޾Ƽ� �׸�ŭ�� �޸𸮸� Ȯ���� �ϴ� ������ 

#include <iostream>
#include <cstring>
#include "MyString.h"

Mystring::MyString(int s) : len(s), bufSize(s) { // private ������ 
	buf = new char[s + 1]; 
	buf[s] = '\0'; 

}

Mystring::MyString() : len(0), bufSize(0) // ����Ʈ ������  

{
	buf = new char[1];
	buf[0] = '\0';

}

Mystring::Mystring(const char* str) // ������ 
{
	len = bufSize = strlen(str); // ���ڿ� ����  
	buf = new char[len + 1];  // ���ڿ� ������� 
	strcpy(buf, str); // ���ڿ� ����  
} 

Mystring::MyString(const MyString& mstr) // ���� ������/ �޸� Ȯ���ؼ� strcpy ������� ���� 
	: len(mstr.len), bufSize(mstr.len)
{
	buf = new char[len + 1]; 
	strcpy(buf, mstr.buf); 
}

Mystring& MyString::operator+=(const MyString& mstr)
{
	if (bufSize < len + mstr.len) {
		char* tbuf = new char[(bufSize = len + mstr.len)]
		strcpy(tbuf, buf); 
		delete[] buf;
		buf = tbuf; 
	}
	strcpy(buf + len, mstr.buf); 
	len += mstr.len; 
	return *this; 
} 

// ���� �ڱ� �ڽſ� ��� �ִ� ���ڿ��� ���� �Ҵ��� �޸𸮿��ٰ� ���縦 �� ������ 
// ������ �޸𸮴� �ʿ���� �ݳ��� 



