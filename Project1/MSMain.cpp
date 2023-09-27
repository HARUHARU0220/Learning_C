int main()
{
	MyString str1("MyString class");
	MyString str2("Object Oriented"); 
	MyString str3; 

	cout << str1 << end1; // 문자열 출력 
	str3 = "Programming"; // 묵시적 형 변환 및 이동 대입 
	cout << str3 << "의 문자열 길이는"; 
	cout << str3.length() << end1; // 문자열 길이를 구하는 메소드 
	str1 = str2; 
	cout << str1 << end1; 
	str1 = str2 + str3; // 문자열 연결 연산자, 이동 대입 연산자 

// 대입연산자 또 더하기 연산자로 좀 더 직관적으로 문자열 취급 

}