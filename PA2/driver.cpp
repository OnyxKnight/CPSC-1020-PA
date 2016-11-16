/**********************
* Luke Brown          *
* CPSC 1020 003, F16  *
* PA2                 *
* luke4@g.clemson.edu *
* 10-26-16            *
**********************/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include "classes.h"
using namespace std;
int main( int argc, char *argv[] ){
    /*
    cout << "Creating array of objects, please wait...";
    Assignment objArr[100000];
    for (int i =0; i<100000; i++){ 
       Assignment g("Lab",4,10,10.0);
       objArr[i] = g;
    }
    cout << "...ok" << endl;
    
    for(int i = 0; i < 100000; i++){
       cout << objArr[i].getAssignmentType() << endl;
    }
    */
    int lineCount = 0;
    string buffer = "";
    std::vector<string> fileDump;
    ifstream in(argv[1]);
    if(!in.good()){
       cout << "Can't open file, or no file has been passed via arguments!" << endl;
    } else {
           cout << "File opened, begin reading...";
           do {
               getline( in, buffer );
               fileDump.push_back(buffer);
               lineCount++;
           }
           while(in.peek() != EOF);
           in.close();
           cout << "...complete!" << endl << lineCount << " line(s) read, and " << int(fileDump.size()) << " values stored." << endl;
    }
    //lambda expression to step thru the vector
    // for_each( fileDump.begin(),
    //           fileDump.end(),
    //           [] (string s){
    //             //cout << s << endl;
    //             //work in progress
    //           }
    // );
    int arrSize = atoi(fileDump.front().c_str());
    Assignment asmtArray[arrSize];
    for (int i = 0; i < arrSize; i++){
      Assignment obj;
      asmtArray[i] = obj;
    }

    /*
    if( lineCount == 1 ){
              objToMake = atoi(buffer.c_str());
    }
    */
    


    return 0;
}
