/**
 * Luke Brown
 * CPSC 1020 003, F16
 * PA3
 * luke4@g.clemson.edu
 */
#ifndef __WORDFIND_H__
#define __WORDFIND_H__
#include <iostream>
#include <fstream>

using namespace std;
class WordFind
{
	private:
		/*Used to read in the game board*/
		char **matrix;
		/*Used to set the size of the matrix*/
		int matSize;
		/*How many words are found in the game*/
		int numAns;
		/*The actual words -- answers*/
		string *ans;
		/*The number configuration of the answer*/
		int *answerLocations;
		int numberofAnswers;
		/*Used to determine which word is correct and needs to be printed*/
		bool *correct;
		int numCorrect;
		int playerAnsInt;		
		string playerAnsStr;

	public:
		

		/*Default constructor*/
		WordFind();

		/*Regular constructor*/
		WordFind(int matSize, int numAns, string *ans, int *answer, char **matrix);

		/*Destructor*/
		~WordFind();

		int getMatSize();

		int getPlayerAnsInt();
		
		string getPlayerAnsStr();

		int getNumAns();
		
		void setPlayerAns(int pa);

		void setPlayerAns(string pa);

		void setMatrix(char **mat);

		void setMatSize(int mSize);

		void setNumAns(int nAns);

		void setAns(string *ans);

		void setAns(int *answers);



		/*prints the instructions for the game.  This will also ask the user
		 *if they want to play they should enter a 1 for yes 0 for no.
		 *Return their answer.    */
		int printInstruction();

		/*prints the game board */
		void printGame();

		/*this is the actual driver of the game.  This is called by main.  The only other
         *thing main does is call readData to read in the data .*/
		void start();

		/*This function checks the players answer with all possible answers in the
		 *array.    If the answer is incorrect return false.  */
		bool isCorrectAnswer();


		/*When the player returns a correct word the characters in the matrix are
		 *replaced with spaces and the word is printed below the matrix.  */
		void updateMatrix(int num);


		void printWords(int count);

};
#endif