/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* CPSC 1020           *
* Assignment 1        *
* 09-27-16            *
**********************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "WordFind.h"

int main(int argc, char *argv[])
{
  /*This variable holds the number of words that can be found in the game*/
  int numAns;

  /*This arrays stores the words hidden in the game.  This could be read in
   *from the file, but I decided to hard code it for this assignment.*/
  char *ans[2] = {"SHOUT", "FISH"};

  /*This array holds the number configuration of the answer*/
  int answer[2];

  /*Used to determine which word is correct and needs to be printed.  As the
   *word is correctly found false will be replace with true.  For those of you
   *who have not had C, bool is a data type that allows you to give the value
   *of a variable either true or false.  In order to use bool you must include
   *the stdbool.h, (see above)*/
  bool correct[2] = {false, false};

  /*A count of the number of words the user has correct*/
  int numCorrect = 0;
  int i, j;

  /*This line creates a file pointer.  fopen basically opens
   *the file passed in by the command line argument argv[1]*/
  FILE *inPtr = fopen(argv[1], "r");

  /*This block of code check to see if the file was actually opened properly. If
   *not, it will print an error message and then close the program. */
  if(inPtr == NULL)
  {
    printf("Can't open input file!");
    exit(1);
  }

  /*Now we are going to read in the data from the file.  First the number of
   *words we will need to find in the matrix*/
  fscanf(inPtr, "%d", &numAns);

  char matrix[3][3];
  /*Now read in the numerical values that corrsponds to the actual answers*/
  fscanf(inPtr, "%d %d", &answer[0], &answer[1]);

  /*Read in the data for the 3 by 3 matrix.  This is for the gameboard */
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      fscanf(inPtr," %c", &matrix[i][j]);
    }
    printf("\n");
  }

  /*Call printInstruction to start the game.*/
  printInstruction(numAns, numCorrect, matrix, answer, correct, ans);

  return 0;

}
