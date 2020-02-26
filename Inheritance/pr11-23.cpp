//This program demonstrates the use of 
//objects of derived classes.
#include "inheritance1.h"
#include <iostream>
#include <memory>
using namespace std;

// These arrays of string are used to print
// values of enumerated types
const string dName[] =
{ "Archeology", "Biology", "Computer Science" };

const string cName[] =
{ "Freshman", "Sophomore", "Junior", "Senior" };

int main()
{
    // Create Faculty and Student objects
   Faculty *prof =  new Faculty("Indiana Jones", Discipline::ARCHEOLOGY); 
   Student *st =  new Student("Sean Bolster", Discipline::ARCHEOLOGY, prof);
    
    cout << "Professor " << prof->getName() << " teaches "
         << dName[static_cast<int>(prof->getDepartment())] 
         << "." << endl;

    //Get student's advisor
    cout << st->getName() << "\'s advisor is "
         << prof->getName() << ".";
    cout << endl;

	Person p("Joe Smith");
	Student s("John Doe", Discipline::COMPUTER_SCIENCE, prof);

	p = s;

	Student* str = &s;
	Person* pr = &p;

	//p.getAdvisor();

	str = static_cast<Student*>(pr);

	cout << str->getAdvisor();

    return 0;
}
