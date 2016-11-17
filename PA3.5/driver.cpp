/**
 * Luke Brown
 * CPSC 1020 003, F16
 * PA3
 * luke4@g.clemson.edu
 */
#include <iostream>
#include <fstream>
#include "Wordfind.h"
#include "ReadFile.h"

int main ( int argc, char *argv[] ){

	std::ifstream in( argv[1] );
	Wordfind wf;
	if( in.fail() ){
		std::cout << "Error opening file or no input file provided." << std::endl;
		exit( 1 );
	} else {
		wf = parse( in );
		//wf.start();
	}

	return 0;
}