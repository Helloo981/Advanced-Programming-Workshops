// Adv Prog - Workshop 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //TASK 1 --- LENGTH OF STRING

    /*
    string input;
    cout << "Write something:" << endl;
    //cin >> inut -- this only reads the first word -- getline reads the entire line
    getline(cin, input);

    int input_length = input.length(); //get size
    cout << input << ": " << input_length << " characters.";
    */


    //TASK 2 --- CAESAR CIPHER --- ASCII



    int cipher_key; // how much to shift
    string text; //user input
    int choice; // 0 to encrypt, 1 to decrypt
    string result; // print result

    cout << "Write the cipher code you would like to encrypt or decrypt: " << endl;
    getline(cin, text);
    //cout << "insert 0 to encrypt, or 1 to decrypt." << endl;
    //cin >> choice;
    while (true) {
        cout << "insert 0 to encrypt, or 1 to decrypt." << endl;
        cin >> choice;
        if (choice == 0 || choice == 1) {
            break;
        }
        else {
            cout << "Choose either 0 or 1 hoe." << endl;
            false;
        }
    }
    cout << "Insert the key for the cipher: ";
    cin >> cipher_key;

    //cout << text << " " << choice << " " << cipher_key << endl;;

    if (choice == 0) {
        //encrypt
        for (int i = 0; i < text.length(); i++) {
            //lowercase
            if (text[i] >= 97 && text[i] <= 122) {
                if (text[i] + cipher_key > 122) { // if over z
                    result += text[i] + cipher_key - 26; // return to a
                }
                else {
                    result += text[i] + cipher_key;
                }
            }
            //uppercase
            else if (text[i] >= 65 && text[i] <= 90) {
                if (text[i] + cipher_key > 90) { //if over Z
                    result += text[i] + cipher_key - 26; // return to A
                }
                else {
                    result += text[i] + cipher_key;
                }
            }
        }
        cout << result << endl;
    }
    else if (choice == 1) {
        for (int i = 0; i < text.length(); i++) {
            //lowercase
            if (text[i] >= 97 && text[i] <= 122) {
                if (text[i] - cipher_key < 97) {
                    result += text[i] - cipher_key + 26;
                }
                else {
                    result += text[i] - cipher_key;
                }
            }
            //uppercase
            else if (text[i] >= 65 && text[i] <= 90) {
                if (text[i] - cipher_key < 65) {
                    result += text[i] - cipher_key + 26;
                }
                else {
                    result += text[i] - cipher_key;
                }
            }
        }
        cout << result << endl;

    }
    else {
        cout << "Invalid Input\n" << endl;
    }
}