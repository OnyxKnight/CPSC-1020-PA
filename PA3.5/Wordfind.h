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
class Wordfind {
private:
	int matrix_size;
	int total_ans;
	int number_correct;
	int* correct_flag;
	int** matrix_pos;	
	int** matrix_ans;
	char** matrix_words;
	
public:
	//constructors
	Wordfind();
	/**
	 * To call this constructor populate fields in this order:
	 * matrix size,
	 * total answers,
	 * number correct,
	 * int array of correct flag,
	 * int double array of matrix positions,
	 * int double array of matrix answers,
	 * char double array of matrix words
	 */
	Wordfind(int ms, int ta, int nc, int* cf, int** mp, int** ma, char** mw);
	Wordfind(const Wordfind &obj);
	//gets
	int getMatrixSize();
	int** getMatrixPos();
	int** getMatrixAns();
	char** getMatrixWords();
	int getTotalAns();
	int getNumCorrect();
	int* getCorrectFlag();
	//sets
	void setMatrixSize(int ms);
	void setMatrixPos(int** mp);
	void setMatrixAns(int** ma);
	void setMatrixWords(char** mw);
	void setTotalAns(int ta);
	void setNumCorrect(int nc);
	void setCorrectFlag(int* cf);
	//methods
	void printGame();
	void printInstructions();
	int checkAnswer();
	void start();
};
#endif