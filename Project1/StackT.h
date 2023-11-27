#pragma once
template <typename T> 

class Stack {

	T* buf; // buffer pointer 
	int top; // stack top 
	int size; // 스택의 크기 

public:   
	Stack(int s); //생성자, s는 사이즈 값에 해당하는 초기값  
	virtual ~Stack(); //소멸자 
	bool full() const; 
	bool empty() const; 
	void push(const T& a); 
	void push(T&& a); 
	T&& pop(); 

};