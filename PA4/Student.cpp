#include "Student.h"
void Student::setGPA(float gpa){ GPA = gpa; }
void Student::setClassStanding(string standing){ classStanding = standing; }
void Student::setCurCredit(int credit){ curCredit = credit; }
float Student::getGPA(){ return GPA; }
string Student::getClassStanding(){ return classStanding; }
int Student::getCurCredit(){ return curCredit; }
int Student::getMaxCredit(float g, string s){
	int hours
	switch(s){
		case "Freshman":
		case "freshman":
		case "FRESHMAN":
			if (g < 2.5){ hours = 12; }
			else { hours = 15; }
			break;
		case "Sophmore";
		case "sophmore";
		case "SOPHMORE";
			if (g < 2.5){ hours = 12; }
			else { hours = 18; }
			break;
		case "Junior";
		case "junior";
		case "JUNIOR";
			if (g < 2.5){ hours = 12; }
			else { hours = 18; }
			break;
		case "Senior";
		case "senior";
		case "SENIOR";
			if (g < 2.5){ hours = 12; }
			else { hours = 18; }
			break;
		default:
			hours = -1;
	}
	return hours;
}
Student::Student(){

}
Student::Student(string fName, string lName, float sgpa, string sclass, int smaxCredit, int scurCredit){

}
~Student::Student(){

}
void Student::printInfo(){

}