#include "WordFreqPair.h";
#include "DocSummary.h";


WordCountPair::WordCountPair() {
	//default constructor
	//sets word to null string and count to zero
	word = "";
	count = 0;
}

WordCountPair::WordCountPair(string words, int freq) {
	//takes a word			
	//counts its parameters
	//initialise word and counter variables
	word = words;
	count = freq; //set count to one if this parameter is not supplied
}

void WordCountPair::setWord(string currWord) {
	//sets word variable with the input
	word = currWord;
}

string WordCountPair::getWord() {
	//returns word
	return word;
}

void WordCountPair::setCount(int currCount) {
	//sets count variable with the input
	count = currCount;
}

int WordCountPair::getCount() {
	//set count variable with the input
	return count;
}