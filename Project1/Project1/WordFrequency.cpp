#include "wordfrequency.h"
using namespace std;

void WordFrequency::ReadFile(string filename){

    ifstream infile;
    infile.open(filename);
    string textline;
    char * cWords;

    while(!infile.eof()){

        getline(infile, textline);
        char *cstr = new char[textline.length() + 1];
        strcpy(cstr, textline.c_str());
        cWords = strtok(cstr," ,.-!?()-_;");

        while (cWords != NULL)
        {
            string  str(cWords);
            Words.push_back(str);
            cWords = strtok (NULL, " ,.-!?()-_;");
        }
        delete [] cstr;
    }
}

void WordFrequency::GetWordsFrequency(list<string> Words){
    list<string> Words2;
    Words2 = Words;
    Words.sort();
    Words.unique();
    int iWordCount = 0;
    for (list<string>::iterator it=Words.begin(); it!=Words.end(); ++it){
            cout << *it <<" ";
            for (list<string>::iterator itt=Words2.begin(); itt!=Words2.end(); ++itt){
                if(*it == *itt){
                    iWordCount++;
                }
        }
          cout << iWordCount << endl;
          iWordCount = 0;
     }
}

list<string> WordFrequency::getWordsList(){
    return this->Words;
}