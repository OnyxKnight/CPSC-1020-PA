/**
 * Luke Brown
 * CPSC 1020 003, F16
 * PA3
 * luke4@g.clemson.edu
 */
#include <iostream>
#include <fstream>
#include "WordFind.h"
#include "readData.h"

using namespace std;

int main ( int argc, char *argv[] ){

	ifstream input( argv[1] );
	WordFind wf;
	if( input.fail() ){
		cout << "Error opening file or no input file provided." << endl;
		exit( 1 );
	} else {
		wf = readData( input );
		wf.start();
	}
	return 0;
}