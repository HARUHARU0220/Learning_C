#pragma once
template <typename T> 

class Stack {

	T* buf; // buffer pointer 
	int top; // stack top 
	int size; // ������ ũ�� 

public:   
	Stack(int s); //������, s�� ������ ���� �ش��ϴ� �ʱⰪ  
	virtual ~Stack(); //�Ҹ��� 
	bool full() const; 
	bool empty() const; 
	void push(const T& a); 
	void push(T&& a); 
	T&& pop(); 

};