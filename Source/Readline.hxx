/*
    Class to read a file line-by-line.
    Returns a single method, ReadLine,
    which returns the next line from the file.
*/

#include "Readline.h"

// Constructor - create/open the file
Reader::Reader(const char* path){
    this->filestream.open(path);
}
// Destructor - close the file
Reader::~Reader(){
    this->filestream.close();
}

// Read the next line from the file stream.
std::string Reader::ReadLine(){
    std::string resultStr;
    std::getline(this->filestream, resultStr);

    return resultStr;
}

// Checks if the file contains any more data.
bool Reader::HasNextLine(){
    return this->filestream.peek() != EOF;
}