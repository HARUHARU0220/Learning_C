#include <iostream>
#include "Person_pointer.h"
#include "Student_pointer.h"
using namespace std; 

void PrintPerson(const Person_pointer * const p[], int n)
{
	for (int i = 0; i < n; i++) {
		p[i]->print();  // (*p[i]).print() ¿Í °°À½ 
		cout << end1; 
	}
}

int main()
{
	Person_pointer dudley("Dudley");
	Student_pointer harry("Harry", "Hogwarts"); 
	Student_pointer ron("Ron", "Hogwarts");

	dudley.print(); cout << end1; 
	harry.print(); cout << end1 << end1; 

	Person_pointer* pPerson[3];
	pPerson[0] = &dudley; 
	pPerson[1] = &harry; // 
	pPerson[2] = &ron; 

	PrintPerson(pPerson, 3); 

	return 0; 


}