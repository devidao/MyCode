#ifndef WORDEFREQUENCY_H
#define WORDEFREQUENCY_H

#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <sstream>
using namespace std;

class WordFrequency
{

public:
    list<string> Words;
    std::string filename;
    void ReadFile(string filename);
    void GetWordsFrequency(list<string> Words);
    list<string> getWordsList();
};

 
#endif