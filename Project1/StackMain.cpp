#include "StackT.h"
#include "MyString.h"
using namespace std; 

int main()
{
	Stack<char> sc(100);// ���� 100������ ������ �� �ִ� ���� ���� 
	sc.push('a'); // char ���� ��� 
	sc.push('b');
	cout << ""CHAR STACK" : ";
		while (!sc.empty()) // ��� ���� �ʴٸ�  
			cout << sc.pop(); // �����͸� ������. 
	cout << end1; 
	// ����� b - > a  ������ �ȴ�   


	//���� Ŭ����, ���ø��� �ϳ� ��������� char, int ����� �ȴ� 

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
			while (!msStack.empty()) // ������� �ʴٸ�  
				cout << msStack.pop(). 
				cout << end1; 
		return 0; 

} 





