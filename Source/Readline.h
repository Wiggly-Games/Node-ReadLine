#include <iostream>
#include <fstream>

#ifndef READER_H
#define READER_H

class Reader {
    private:
        std::ifstream filestream;

    public:
        Reader(const char* filename);
        ~Reader();
        
        std::string ReadLine();
        bool HasNextLine();
};

#include "Readline.hxx"

#endif