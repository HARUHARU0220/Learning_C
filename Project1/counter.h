// #pragma once ����ص� �� 
#ifndef COUNTER_H_INCLUDED // �� : ���ǵǾ� ���� �ʴٸ� 
#define COUNTER_H_INCLUDED 

class Counter { // Ŭ���� COUNTER �� ���� ���� 
	int value; 
	// privae �����͸�� 
public:  //public ����Լ� 
	void reset()
	{  value = 0;	} // ������� ���� 0���� ���� 
	void count()	// ������� ���� 1 ������Ŵ  
	{	++value;	} 
	int getValue() const	//������� ���� ���� ��ȯ��  
	{	return	value;	}
};

#endif // COUNTER_H_INCLUDED