#pragma once
class Complex1 {
	double rPart, iPart; // 실수부와 허수부 
	// 가시성 지시어가 없어서 프라이빗 

public: // 생성자 
	
	Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {}
	Complex1	conj()	const {
		return Complex1(rPart, -iPart); 
	} 
	Complex1 add(const Complex1& c)   const {
		return Complex1(rPart + c.rPart, iPart + c.iPart); 
	} 
	Complex1 sub(const Complex1& c) const {
		return Complex1(rPart - c.rPart, iPart - c.iPart); 
	} 
	Complex1 mul(const Complex1& c)	 const; 
	Complex1 div(const Complex1& c)  const; 
	void  display() const; // 복소수 값을 출력 

};