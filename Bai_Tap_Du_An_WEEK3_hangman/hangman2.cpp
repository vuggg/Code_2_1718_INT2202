#include <iostream>

using namespace std;

string chooseWord()
{
    string word = "hello";
    return word;
}

int main()
{
	string word = chooseWord();
	int badGuessCount = 0;
	string guessedWord = string(word.length(),'-');
	cout << "Current guess = " << guessedWord << endl;
	cout << "You have made " << badGuessCount << " bad guess(es)";
}
