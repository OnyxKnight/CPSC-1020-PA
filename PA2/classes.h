/**********************
* Luke Brown          *
* CPSC 1020 003, F16  *
* PA2                 *
* luke4@g.clemson.edu *
* 10-26-16            *
**********************/
#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Assignment
{
   private:
    std::string assignmentType;
    int currentNumberOfGrades;
    int totalNumberOfGrades;
    double percentOfFinalGrade;
    std::vector<double> allGrades;
   
   public:
    Assignment();
    Assignment( std::string, int, int, double );
    std::string getAssignmentType();
    int getCurrentNumberOfGrades();
    int getTotalNumberOfGrades();
    std::vector<double> getAllGrades();
    double getPercentOfFinalGrade();
    void setAssignmentType( std::string );
    void setCurrentNumberOfGrades( int );
    void setAllGrades( int );
    void setTotalNumberOfGrades( int );
    void setPercentOfFinalGrade( double );
    void updateGradesArray();
};
/*
class FileDump
{
   private:
    std::string fileName;;
    //Assignment objectArray[];
    void getFileContents();
    void setFileName();
   public:
    FileDump(std::string fileName);
    std::string getFileName();
};*/
#endif
