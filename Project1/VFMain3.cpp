// 대입 및 이동 대입 연산자의 활용 
int main()
{
	float	a[3] = { 1, 2, 3 }; 
	float	b[3] = { 2, 4, 6 }; 
	VecF	v1(3, a);  // 메모리 할당 
	VecF	v2(3, b); 
	VecF	v3(3); // 값은 초기화하지 않고 데이터 저장공간만 확보  
	v3 = v1;  // 대입 연산자 , 1-value  
	cout << v3 << end1; 
	v3 = v1.add(v2); // 이동 대입 연산자 
	cout << v1 << "+" << v2 << "=";
	cout << v3 << end1; 
	return 0; 
}