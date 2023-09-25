#ifndef PENCILS_H_INCLUDED
#define PENCILS_H_INCLUDED

class Pencils { // ���� 
	int dozens; // Ÿ 
	int np; // ����

public: 
	Pencils() : dozens(), np(0) {};
	Pencils(int n)
	{
		dozens = n / 12; np = n % 12;} // �������� ���ϴ� ����
	Pencils(int d, int n) : dozens(d), np(n) {}
	Pencils& operator ++ (); // ++������(���� ǥ��) 
	Pencils operator ++ (int); // ++������(���� ǥ��) 

	void display() const; 

}; 

#endif