/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* CPSC 1020           *
* Assignment 1        *
* 09-27-16            *
**********************/
#include "WordFind.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

/*prints the instructions for the game.  This will also ask the user
 *if they want to play they should enter a 1 for yes 0 for no.
 *Return their answer.*/

int printInstruction(int numAns, int numCorrect, char matrix[3][3],
                    int *answer, bool *correct, char *ans[])
{
   int option;
   printf("\n!!!Welcome to the WordFind program!!!\nYou will be given a grid "
   "of characters. The grid has various words hidden in it.\nYour job is to"
   " find the hidden words.\nThe letters to the words will be contigous.\n"
   "\nIf you are ready for the challenge enter 1 or 0 to quit\n");
   scanf("%d", &option);
   if (option)
   {
      printGame(numAns, numCorrect, matrix, answer, correct, ans);
   } else { printf("Thank you for playing\n"); }
   return 0;
}

/*prints the game board */

void printGame(int numAns, int numCorrect, char matrix[3][3], int *answer,
               bool *correct,  char *ans[])
{
   char response[] = ""; /*holds players response during game play*/
   printf("The numbers in this grid map to letters in the wordFind grid bellow."
      "\nThere are %d words in the word grid."
      "\nDefine the answer using the numbers in the first grid.\n", numAns);
   
   /*print the reference grid*/
   printf("\n+---+---+---+\n"
          "| 1 | 2 | 3 |\n"
          "+---+---+---+\n"
          "| 4 | 5 | 6 |\n"
          "+---+---+---+\n"
          "| 7 | 8 | 9 |\n"
          "+---+---+---+\n");

   /*print the word puzzle*/
   printf("\nWORDFIND PUZZLE\n"
          "\n+---+---+---+\n"
          "| %c | %c | %c |\n"
          "+---+---+---+\n"
          "| %c | %c | %c |\n"
          "+---+---+---+\n"
          "| %c | %c | %c |\n"
          "+---+---+---+\n",
          matrix[0][0], matrix[0][1], matrix[0][2],
          matrix[1][0], matrix[1][1], matrix[1][2],
          matrix[2][0], matrix[2][1], matrix[2][2]);
   
   printWords(correct, ans);
   
   if (numCorrect == numAns) /*we have a winner*/
   {
      printf("Congratulations, you found all the words!!!\n");
      exit(0); /*end */
   } else {
      printf("Enter your answer: ");
      scanf(" %s", response);
      isCorrectAnswer(numAns, correct, numCorrect,
                      answer, atoi(response), matrix, ans); /*run our checks*/
   }
}

void printWords(bool *correct, char *ans[])
{
  int stringA, stringB, i;
  stringA = strlen(ans[0]); /*strlen needed for calculations later*/
  stringB = strlen(ans[1]);

  if(correct[0] != false) /*check first word*/
  {
     printf("%s\n", ans[0]);
  } 
  else if(correct[1] != false) /*check second word*/
  {
     printf("%s\n", ans[1]);
  } else {
     for (i = 0; i < stringA; i++)
     {
        printf("_ ");
     }
     printf("    ");
     if (correct[1] != false) /*check second word*/
     {
        printf("%s", ans[1]);
     } else {
        for(i = 0; i < stringB; i++)
        {
           printf("_ ");
        }
     }
     printf("\n\n");
    }
}


/*This function checks the players answer with all possible answers in the
 *array. If the answer is incorrect return false.  */

bool isCorrectAnswer(int numAns, bool *correct, int numCorrect,
                     int *answer, int a, char matrix[3][3], char **ans)
{
   if(a == answer[0])
   { /*check if they entered first word correctly*/
      if(correct[0] != true) /*check if value is set*/
      {
         numCorrect+=1; /*update counter*/        
         correct[0] = true; /*set value*/
         updateMatrix(numAns, numCorrect, matrix, answer, correct, a, ans);
         return true;
      }
   }
   else if(a == answer[1])
   { /*check if they entered second word correctly*/
     if(correct[1] != true)
     {
        numCorrect+=1; /*update counter*/ 
        correct[1] = true; /*set value*/
        updateMatrix(numAns, numCorrect, matrix, answer, correct, a, ans);
        return true;
     }
   } else { /*they were wrong, inform them and redraw game matrix*/
      printf("Try Again.\n");
      printGame(numAns, numCorrect, matrix, answer, correct, ans);
      return false;
   }
   return false; /*default return*/
}

/*When the player returns a correct word the characters in the matrix are
 *replaced with spaces and the word is printed below the matrix.  */

 void updateMatrix(int numAns, int numCorrect, char matrix[3][3], int *answer,
                   bool *correct,int a, char **ans)
{
   if(a == answer[0])
   {
      matrix[0][0] = ' ';
      matrix[0][1] = ' ';
      matrix[1][0] = ' ';
      matrix[1][1] = ' ';
      matrix[2][0] = ' ';
      printGame(numAns, numCorrect, matrix, answer, correct, ans);
   } else {
      matrix[0][2] = ' ';
      matrix[1][2] = ' ';
      matrix[2][1] = ' ';
      matrix[2][2] = ' ';
      printGame(numAns, numCorrect, matrix, answer, correct, ans);
   }
}
