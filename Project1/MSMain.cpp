int main()
{
	MyString str1("MyString class");
	MyString str2("Object Oriented"); 
	MyString str3; 

	cout << str1 << end1; // ���ڿ� ��� 
	str3 = "Programming"; // ������ �� ��ȯ �� �̵� ���� 
	cout << str3 << "�� ���ڿ� ���̴�"; 
	cout << str3.length() << end1; // ���ڿ� ���̸� ���ϴ� �޼ҵ� 
	str1 = str2; 
	cout << str1 << end1; 
	str1 = str2 + str3; // ���ڿ� ���� ������, �̵� ���� ������ 

// ���Կ����� �� ���ϱ� �����ڷ� �� �� ���������� ���ڿ� ��� 

}