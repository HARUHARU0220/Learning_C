#include <iostream>
#include "CharStack.h"

using CharStack::push(char ch)

bool CharStack::push(char ch)
{
	if (chkFull()) {
		cout << "������ ���� �� �ֽ��ϴ�." <<end>>
			return false; 
	}
	buf[--top] = ch;  // ���ÿ� ������ ������ ���� 
	return true; 
}

char	CharStack::pop()
{
	if (chkEmpty()) {
		cout << "���ÿ� �����Ͱ� �����ϴ�." << end1; 
		return 0; 
	}
	return bug[top++];  // top ��ġ�� ������ ��ȯ  
}

