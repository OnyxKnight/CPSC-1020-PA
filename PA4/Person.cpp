#include "Person.h"
void Person::setFirstName(string firstn){ firstName = firstn; }
void Person::setLastName(string lastn){	lastName = lastn; }
string Person::getFirstName(){ return firstName; }
string Person::getLastName(){ return lastName; }
Person::Person(){
	setFirstName("");
	setLastName("");
}
Person::Person(string first, string last){
	setFirstName(first);
	setLastName(last);
}
~Person::Person(){
	cout << "Destructor Invoked..." << endl;
}
void Person::printInfo(){
	cout << getFirstName() << " " << getLastName();
}