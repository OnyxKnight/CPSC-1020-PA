/**********************
* Luke Brown          *
* CPSC 1020 003, F16  *
* PA2                 *
* luke4@g.clemson.edu *
* 10-26-16            *
**********************/
#include <iostream>
#include <string>
#include <vector>
#include "classes.h"

//For Assignment Class
Assignment::Assignment(){
   setAssignmentType( "" );
   setCurrentNumberOfGrades( 0 );
   setTotalNumberOfGrades( 0 );
   setPercentOfFinalGrade( 0.0 );
}

Assignment::Assignment( std::string s, int x, int y, double d ){
   setAssignmentType( s );
   setCurrentNumberOfGrades( x );
   setTotalNumberOfGrades( y );
   setPercentOfFinalGrade( d );
}
std::string Assignment::getAssignmentType(){
   return assignmentType;
}
int Assignment::getCurrentNumberOfGrades(){
   return currentNumberOfGrades;
}
std::vector<double> Assignment::getAllGrades(){
   return allGrades;
}
int Assignment::getTotalNumberOfGrades(){
   return totalNumberOfGrades;
}
double Assignment::getPercentOfFinalGrade(){
   return percentOfFinalGrade;
}
void Assignment::setAssignmentType( std::string thisString){
   assignmentType = thisString;
}
void Assignment::setCurrentNumberOfGrades( int thisMany ){
   currentNumberOfGrades = thisMany;
}
//MUST be passed getTotalNumberOfGrades() or equivalent!
void Assignment::setAllGrades( int thisSize){
   if(thisSize <= 0){
      allGrades.push_back(0);
   } else { for (int i=0; i<thisSize; i++) allGrades.push_back(i); }
}
void Assignment::setTotalNumberOfGrades( int thisMuch ){
   totalNumberOfGrades = thisMuch;
   updateGradesArray();
}
void Assignment::setPercentOfFinalGrade( double thisPercent ){
   percentOfFinalGrade = thisPercent;
}

void Assignment::updateGradesArray(){
  setAllGrades(getTotalNumberOfGrades()); 
}
//End Assignment Class