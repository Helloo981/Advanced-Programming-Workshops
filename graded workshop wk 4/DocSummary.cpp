#include "DocSummary.h";
#include "WordFreqPair.h";
#include <fstream> //for file reading
#include <algorithm> //for transform
#include <iomanip> //console layout

//takes doc as input and initialises class variables
DocSummary::DocSummary(string filename) {

	numberOfWords = 0;
	numberOfSentences = 0;
}

void DocSummary::printSummary() {

	cout << "number of sentences is: " << numberOfSentences << endl;;
	cout << "no. of words: " << numberOfWords << "\n" << endl;

	//for each word in wordList, print word and count
	for (int i = 0; i < wordList.size(); i++) {
		cout << left << setw(15) << wordList[i].getWord() << setw(15) << wordList[i].getCount() << endl;
		//setw = makes columns 
		//left = text alignment
	}
}

//reads doc word by word and calls addWord(), removePunc() and updateSentenceCount()
void DocSummary::analyseDocument(string filename) {

	ifstream myFile(filename); //io stream
	
	while (myFile >> word) {
		numberOfWords++;

		transform(word.begin(), word.end(), word.begin(), ::tolower); //transform to lowercase

		increaseSentenceCount(word);
		word = removePunc(word); //replaces word with the same word just removed punctuation
		addWord(word); //add word into wordList
	}
}

//takes word as input and increases numberOfSentences if contains . ! ?
void DocSummary::increaseSentenceCount(string word) {
	
	for (int i = 0; i < word.length(); i++) {

		if (word[i] == '.' || word[i] == '!' || word[i] == '?') {
			numberOfSentences++;
		}
	}
}


//adds word into wordList if doesn't exist already, otherwise increase count in vector
void DocSummary::addWord(string word) {

	for (int i = 0; i < wordList.size(); i++) {
		//if word is already in wordList, increase count
		if (word == wordList[i].getWord()) {
			//have to use get and set methods as it is private variables
			wordList[i].setCount(wordList[i].getCount() + 1);
			return; //return to vector
		}
	}

	//if it doesn't fit this criteria we know to add the new word into the list
	//make it a new pair in the WordCountPair
	WordCountPair * newPair = new WordCountPair(word, 1); //put count as 1 and add word
	wordList.push_back(*newPair);

}


string DocSummary::removePunc(string word) {

	int i = 0; //used for while loop

	while (i < word.length()) {

		if (ispunct(word[i])) {
			word.erase(i, 1);
		}
		else {
			i++;
		}	
	}
	return word;
}
