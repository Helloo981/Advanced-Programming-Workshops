#include "DocSummary.h"
#include "WordFreqPair.h"

int main()
{
	
	DocSummary doc1("input.txt"); //create instance of DocSummary class called doc1
	doc1.analyseDocument("input.txt");
	doc1.printSummary();

	return 0;

}