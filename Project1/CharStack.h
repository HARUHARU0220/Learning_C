#pragma once
class CharStack {
	enum { size = 20 }; // ������ ũ��, �����ϴ� ���� ��Ÿ�� 
	int top;  // ������ �����͸� ����Ű�� ������ 
	char buf[size]; // ������ �������, buf �ȿ� ������ ũ�� �־ ��  

public:   
	CharStack() : top{ size } {} //������ 
	bool chkEmpty() const { // ���ÿ� �����Ͱ� ������ true 
		return top == size;  
	} 

	bool chkFull() const { // ������ ������ ������ true 
		return !top; // not top 
	}
	
	bool push(char ch); // ���ÿ� �����͸� ���� 
	char pop();  //���ÿ� �����͸� ���� 
};