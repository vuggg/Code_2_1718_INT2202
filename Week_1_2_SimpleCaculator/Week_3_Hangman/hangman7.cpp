	#include <iostream>
	#define MAX_BAD_GUESSES 7
	
	using namespace std;
	string getHanger(int badGuessCount)
	{
		const string draw[] = { ' ',
		" |  \n",
		
		" |           \n"
		" O           \n",
		
		" |           \n"
		" O           \n" 
		"/            \n",
		
		" |            \n"  
		" O            \n" 
		"/|            \n",
		
		" |             \n"  
		" O             \n" 
		"/|\            \n",
		
		" |             \n"  
		" O             \n" 
		"/|\            \n"
		"/              \n",
		
		" |             \n"  
		" O             \n" 
		"/|\            \n"
		"/ \            \n"
		};
		
		string a = draw[badGuessCount];
		return a;
	}
	string chooseWord()
	{
	    string word = "hello";
	    return word;
	}
	void renderGame(string guessedWord, int badGuessCount)
	{
		cout << "Current guess = " << guessedWord << endl;
		cout << "You have made " << badGuessCount << " bad guess(es)\n";
		string hanger = getHanger(badGuessCount);
		cout << hanger;
	}
	char readAGuess()
	{
		char a;
		cout << "Please enter your next guess: \n";
		cin >> a;
		return a;
	}
	bool contains(string word, char guess)
	{
		int n = word.length();
		for(int i=0;i<n;i++)
		{
			if(guess==word[i])
			{
				return true;
			}
		}
		return false;
	}
	string update(string guessedWord, string word, char guess)
	{
		int n = word.length();
		for(int i=0;i<n;i++)
		{
			if(guess==word[i])
			{
				guessedWord[i] = guess;
			}
		}
		return guessedWord;
	}
	int main()
	{
		string word = chooseWord();
		int badGuessCount = 0;
		string guessedWord = string(word.length(), '-');
		
		do
		{
			renderGame( guessedWord,  badGuessCount);
			char guess = readAGuess();
			if(contains( word,  guess))
			{
				guessedWord = update( guessedWord,  word,  guess);
			}
			else
			{
				badGuessCount++;
			}
			
		} while (badGuessCount < MAX_BAD_GUESSES && word != guessedWord);
		
		renderGame( guessedWord,  badGuessCount);
		if(word == guessedWord)
		{
			cout << "Congrats!!! You are free" << endl;
		}
		else
		{
			cout << "Game Over!!! You are hanged";
		}
	}
