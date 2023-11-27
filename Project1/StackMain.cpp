#include "StackT.h"
#include "MyString.h"
using namespace std; 

int main()
{
	Stack<char> sc(100);// 문자 100개까지 저장할 수 있는 스택 선언 
	sc.push('a'); // char 스택 사용 
	sc.push('b');
	cout << ""CHAR STACK" : ";
		while (!sc.empty()) // 비어 있지 않다면  
			cout << sc.pop(); // 데이터를 꺼낸다. 
	cout << end1; 
	// 출력은 b - > a  순서로 된다   


	//정수 클래스, 탬플릿은 하나 만들었지만 char, int 출력이 된다 

	Stack<int> si(50);
	si.push(5); 
	si.push(10);
	cout << "INT STACK : ";
	while (!si.empty())
		cout << si.pop();
	cout << end1; 

	Stack<MyString> msStack(10)
		MyString s1("KNOU"); 
		MyString s2("Dep,");
		MyString s3("CS");
		msStack.push(s1); 
		msStack.push(s2 + s3); 
		cout << "MyString STACK : "; 
			while (!msStack.empty()) // 비어있지 않다면  
				cout << msStack.pop(). 
				cout << end1; 
		return 0; 

} 





