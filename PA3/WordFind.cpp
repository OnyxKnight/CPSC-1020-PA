/**
 * Luke Brown
 * CPSC 1020 003, F16
 * PA3
 * luke4@g.clemson.edu
 */
#include "WordFind.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
/*Default constructor*/
WordFind::WordFind()
{
	/*setMatrix(char **mat);
    setMatSize(int mSize);
    setNumAns(int nAns);
    setAns(string *ans);
    setAns(int *answers);*/
}

/*Regular constructor*/
WordFind::WordFind(int matSize, int numAns, string *ans, int *answer, char **matrix)
{
	setMatrix(matrix);
    setMatSize(matSize); //size for the matrix
    setNumAns(numAns); //number of answers
    setAns(ans); //the answer as a string
    setAns(answer); //Allocates memory for the number of string answers

	
    


	
    

	/**/
	
    
    /*Allocate memory for the correct bools*/
	
    
    
	/*Now lets initialize the array for the strings for the answers also
	 *initialize the correct to false*/
	
    
    

	/*Allocates memory for the numbers that represents the combination
	 *of integers that represent the answer*/
	
    

	/*initializes the answer*/
	
    

	/*This allocates memory for the 2d Array.*/
	
    
    
	/*Now lets fill the array*/
	
    
    

}

/*Destructor*/
WordFind::~WordFind()
{
    
    /*Call Delete on all the dynamically allocated memory*/

	
}

int WordFind::getMatSize(){
	return matSize;
}

int WordFind::getPlayerAnsInt(){
	return playerAnsInt;
}

std::string WordFind::getPlayerAnsStr(){
	return playerAnsStr;
}

int WordFind::getNumAns(){
	return numberofAnswers;
}

void WordFind::setPlayerAns(int pa){
	playerAnsInt = pa;
}

void WordFind::setPlayerAns(std::string pa){
	playerAnsStr = pa;
}

void WordFind::setMatrix(char **mat){
	
    
}

void WordFind::setMatSize(int mSize){
	matSize = mSize;    
}

void WordFind::setAns(string *ans){
	
    
}

void WordFind::setAns(int *answers){
	
    
}

void WordFind::setNumAns(int ans){
	numberofAnswers = ans;
}


/*prints the instructions for the game.  This will also ask the user
 *if they want to play they should enter a 1 for yes 0 for no.
 *Return their answer.*/
int WordFind::printInstruction()
{
	int answer;
	cout << endl << "!!!Welcome to the WordFind program!!!" << endl;
	cout << "You will be given a grid of characters. ";
	cout << "The grid has various words hidden in it." << endl;
	cout << "Your job is to find the hidden words. ";
	cout << "The letters to the words will be contigous." << endl;
	cout << "If you are ready for the challenge enter 1, or 0 to quit." << endl;
	cout << ">";
	cin >> answer;
	return answer;
}

/*prints the game board */
void WordFind::printGame()
{
	int h, i, j, k, n = 0;
	n = getMatSize();
	//int array[n][n];
	for ( i = 0; i < n; i++ ){
		//top
		cout << " ";
		for( h = 0; h < n ; h++ ){
			cout << " ---";
		}
		cout << endl;
		//inside
		for( j = 0; j < n; j++ ){
			k++;
			cout << " | " << " "; // n
		}
		cout << " | " << endl;
	}
	cout << " ";
	//bottom
	for( h = 0; h < n ; h++ ){
		cout << " ---";
	}
	cout << endl;    
}

void WordFind::printWords(int c)
{
	
    
    
}

/*this is the actual driver of the game.  This is called by main.  */
void WordFind::start()
{
	if (printInstruction() == 1){
		printGame();
	}
	else if (printInstruction() == 0){
		cout << "Thanks for playing!" << endl;
	} else {
		cout << "Not a valid number" << endl;
	}

}

/*This function checks the players answer with all possible answers in the
 *array.    If the answer is incorrect return false.  */
bool WordFind::isCorrectAnswer()
{
	
    return true;
}


/*When the player returns a correct word the characters in the matrix are
 *replaced with spaces and the word is printed below the matrix.  */
void WordFind::updateMatrix(int a)
{
     /*strip out each digit of 'a' then use that number to determine
		 *which subscript needs to replaced with a space */
		 
    
    
}
