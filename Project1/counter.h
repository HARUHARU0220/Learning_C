// #pragma once 사용해도 됨 
#ifndef COUNTER_H_INCLUDED // 뜻 : 정의되어 있지 않다면 
#define COUNTER_H_INCLUDED 

class Counter { // 클래스 COUNTER 의 선언 시작 
	int value; 
	// privae 데이터멤버 
public:  //public 멤버함수 
	void reset()
	{  value = 0;	} // 계수기의 값을 0으로 지움 
	void count()	// 계수기의 값을 1 증가시킴  
	{	++value;	} 
	int getValue() const	//계수기의 현재 값을 반환함  
	{	return	value;	}
};

#endif // COUNTER_H_INCLUDED