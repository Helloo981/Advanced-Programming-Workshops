#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;


class WordCountPair {

public:
	WordCountPair(); //constructor initialising parameters
	WordCountPair(string currWord, int currFreq = 1); //constructor with parameters

	void setWord(string currWord); //sets word variable with the input
	string getWord(); //returns word
	void setCount(int currCount); //set count variable with the input  
	int getCount(); //set count variable with the input

private:
	//variables
	string word; //holds a word
	int count; //holds frequency word occurs in doc
};