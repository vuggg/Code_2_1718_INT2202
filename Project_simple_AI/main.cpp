#include <iostream>
#include <intializeGame
int main()
{
	int wordLength;
	string secretWord;
	int incorrectGuess;
	set<char> previousGuesses;
	bool stop;
	initialize(wordLength, secretWord, incorrectGuess, previousGuesses, stop);
	render(incorectWord, previousGuess, secretWord);
	do
	{
		char guess = getNextGuess(previousGuess, secretWord);
		string mask getUserAnswer(guess);
		update(guess, mask, incorectGuess, secretWord);
	}while (!stop);
	playAnimation(incorrectGuess== MAX_GUESSES, secretWord);
	return 0;
}
