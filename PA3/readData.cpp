/**
 * Luke Brown
 * CPSC 1020 003, F16
 * PA3
 * luke4@g.clemson.edu
 */
#include "readData.h"
/*This is a local or client function. It is not part of the class WordFind.*/
WordFind readData(ifstream &input){
  /*vars that will go into our object*/
  int matrixSize;
  int numberOfAnswers;
  string answerString[1] = "";
  int *answerArr;
  //bool correct;
  //int numCorrect;
  /*end*/
  int tmpInt;
  string tmpStr;
  int count = 1;

  while(input >> tmpInt || input >> tmpStr){
    if(count == 1){
      matrixSize = tmpInt;
    }
    else if(count == 2){
      answerArr = new int[tmpInt];
      numberOfAnswers = tmpInt;
    }
    /*
    int i=0;
    if(count > 2 && count < numberOfAnswers){
        answerArr[i] = tmpStr;
        i++;
    }
    */
    count++;
  }

  //create matrix to hold data
  char **matrix = new char*[matrixSize];
  for (int i = 0; i < matrixSize; ++i){
    matrix[i] = new char[matrixSize];
    cout << matrix[i];
  }
  WordFind wf(matrixSize, numberOfAnswers, answerString, answerArr, matrix);

 /*2. Read in the size of the matrix and the number of answers.*/

 /*3. Create a 2D array for the gameboard. You must dynamically allocate the
  *memory for this array. Look in the notes for an example of how to do this
  *using malloc (however you must use new rather than malloc) or google how to
  *dynamically allocate memory for a 2D array in C++.  I am sure there tons of
  *examples out there. An example can be found here:
  http://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new */

 /*4. Create and dynamically allocate memory for the number of integers*/

 /*5. Create and dynamically allocate memory to hold the strings that will
	*that represents the words in the puzzle */

 /*6. Read the strings from the file*/

 /*7. Read the integers that will represent the answers*/

 /*8. Read the information for th 2d array.  */

 /*9. Create an instance of Wordfind, call the constructor, and return the
	*instance*/
	
	return wf;

}