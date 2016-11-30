#include "CpscCourse.h"
void CpscCourse::setCourseName(string cn){ courseName = cn; }
void CpscCourse::setCourseNum(int cn){ courseNum = cn; }
void CpscCourse::setCourseSect(int cs){ courseSect = cs; }
void CpscCourse::setAvailSeats(int as){ availSeats = as; }
void CpscCourse::setOpenSeats(int os){ openSeats = os; }
string CpscCourse::getCourseName(){ return courseName; }
int CpscCourse::getCourseNum(){ return courseNum; }
int CpscCourse::getCourseSect(){ return courseSect; }
int CpscCourse::getAvailSeat(){ return availSeats; }
int CpscCourse::getOpenSeats(){ return openSeats; }
void CpscCourse::printInfo(){
	//needs to be done
}
