// Task: Read text from file and count every word frequency in text. Reasults output in console. Use OOP ( Object Orientedted Programming).

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iterator>
#include <set>
#include <list>
#include "wordfrequency.h"
using namespace std;

int main(){
    WordFrequency object;
    object.ReadFile("file.txt");
    object.GetWordsFrequency(object.getWordsList());
    return 0;
}