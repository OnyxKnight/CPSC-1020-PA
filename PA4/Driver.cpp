/*#includes go here*/

using namespace std;

void fillFaculty(ifstream&, vector<Faculty>&);
void fillStudents(ifstream&, vector<Student>&);
void fillCpscCourse(ifstream&, vector<CpscCourse>&);


int main(int argc, char* argv[])
{
    ifstream inStudent(argv[1]);

    ifstream inCourse(argv[2]);

    ifstream inFaculty(argv[3]);

    /*Use these to store the courses, students and faculty read from
     *the files. */
    vector <CpscCourse> courses;
    vector <Student> stu;
    vector <Faculty> fac;

    fillFaculty(inFaculty, fac);
    fillStudents(inStudent, stu);
    fillCpscCourse(inCourse, courses);
    
    inStudent.close();
    inCourse.close();
    inFaculty.close();


	return 0;
}

void fillFaculty(ifstream& inFaculty, vector<Faculty>& fac)
{
  /*Your code goes here*/

}

void fillStudents(ifstream& inStudent, vector<Student>& stu)
{
	/*Your code goes here*/
    
}

void fillCpscCourse(ifstream& in, vector <CpscCourse>& course)
{
	/*Your code goes here*/
    
}
