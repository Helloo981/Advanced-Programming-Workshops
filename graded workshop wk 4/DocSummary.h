#pragma once

#include "WordFreqPair.h";
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class DocSummary {

public:
	DocSummary(string filename); //constructor
	void printSummary();
	void analyseDocument(string filename);

private:
	void increaseSentenceCount(string word);
	void addWord(string word);
	string removePunc(string word);

	//variables
	int numberOfWords;
	int numberOfSentences;
	string word;
	string filename;
	vector<WordCountPair> wordList; //vector using wordcountpair -- passing objects from wordcountpair into vector
};