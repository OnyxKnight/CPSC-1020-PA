#include <iostream>
#include "Wordfind.h"
using namespace std;
/**
 * Private vars
 * int matrix_size;
 * int total_ans;
 * int number_correct;
 * int* correct_flag;
 * int** matrix_pos;
 * int** matrix_ans;
 * char** matrix_words;
 */


//The default constructor
//Wordfind::Wordfind();
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
Wordfind::Wordfind(int ms, int ta, int nc, int* cf, int** mp, int** ma, char** mw){
	setMatrixSize( ms );
	setMatrixPos( mp );
	setMatrixAns( ma );
	setMatrixWords( mw );
	setTotalAns( ta );
	setNumCorrect( nc );
	setCorrectFlag( cf );
}
//copy constructor
Wordfind::Wordfind( const Wordfind &obj ){
	this->matrix_size = obj.matrix_size;/*
	this->total_ans = obj.total_ans;
	this->number_correct = obj.number_correct;
	this->correct_flag = obj.correct_flag;*/
	std::cout << "this->matrix_size = " << this->matrix_size << std::endl;
}
//gets
int Wordfind::getMatrixSize(){ return matrix_size; }
int** Wordfind::getMatrixPos(){ return matrix_pos; }
int** Wordfind::getMatrixAns(){ return matrix_ans; }
char** Wordfind::getMatrixWords(){ return matrix_words; }
int Wordfind::getTotalAns(){ return total_ans; }
int Wordfind::getNumCorrect(){ return number_correct; }
int* Wordfind::getCorrectFlag(){ return correct_flag; }
//sets
void Wordfind::setMatrixSize(int ms){ matrix_size = ms; }
void Wordfind::setMatrixPos(int** mp){ matrix_pos = mp; }
void Wordfind::setMatrixAns(int** ma){ matrix_ans = ma; }
void Wordfind::setMatrixWords(char** mw){ matrix_words = mw; }
void Wordfind::setTotalAns(int ta){ total_ans = ta; }
void Wordfind::setNumCorrect(int nc){ number_correct = nc; }
void Wordfind::setCorrectFlag(int* cf){ correct_flag = cf; }
//methods
void Wordfind::printGame(){
	int h, i, j, k, n = 0;
	n = getMatrixSize();
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
void Wordfind::printInstructions(){
	cout << endl << "!!!Welcome to the WordFind program!!!" << endl;
	cout << "You will be given a grid of characters. ";
	cout << "The grid has various words hidden in it." << endl;
	cout << "Your job is to find the hidden words. ";
	cout << "The letters to the words will be contigous." << endl;
	cout << "If you are ready for the challenge enter 1, or 0 to quit." << endl;
	cout << ">";
}
int Wordfind::checkAnswer(){ return 0; } //test for right now

void Wordfind::start(){
	int answer;
	printInstructions();
	cin >> answer;
	if ( answer == 1){
		printGame();
	} else {
		cout << "Thanks for playing!" << endl;
	}
}