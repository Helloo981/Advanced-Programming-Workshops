// Adv Prog - Workshop 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream> //io stream

using namespace std;


int main()
{
    //declare variables
    string word; //string that holds word
    int count; //int that holds number of occurences for a word in file
    int numberOfWords; //no of words in file
    int numberOfSentences;
    string filename = "input.txt"; //shows name of document
    vector<string> wordList; //is a vector of WordFreqPair objects. each entry of the vector holds a WordFreqPair object that keeps the word and its count
    // or an int im not sure what this even does yet lol
    string x;

    //open file and read it
    ifstream myFile(filename); //declare input file stream
    myFile.open(filename); //open file


    if (myFile.is_open())
    {
        while (getline(myFile, word))
        {
            cout << word << '\n';
        }
        myFile.close();
    }

    else 
    {
        cout << "Unable to open file" <<endl;
    }

    return 0;



    //put text into a vector or array

    //split by word / sentences

    // count frequency of word occurence 

    //output in correct format as brief shows

    //std::cout << "Hello World!\n";
}
