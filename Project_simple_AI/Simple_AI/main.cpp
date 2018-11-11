#include <iostream>

using namespace std;

int main()
{
    int wordLength;
    string secretWord; cin >> secretWord;
    int inCorrectGuess;
    set<char> previousGuesses;
    bool stop;
    innitialize(wordLength, secretWord, inCorrectGuess, previousGuesses, stop);
    render(inCorrectGuess, previousGuesses, secretWord);
    do
    {
       char guess = getNextGuess(previousGuesses, secretWord);
       string mask = getUserAnswer(guess);
       update(guess, mask, inCorrectGuess, previousGuesses, secretWord, stop);
       render(inCorrectGuess, previousGuesses, secretWord);
    }while(!stop);
    playAnimation(inCorrectGuess== MAX_GUESSES, secretWord);
    return 0;
}

