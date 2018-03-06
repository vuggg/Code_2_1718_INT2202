
string update(string guessedWord,char guess ,string word)
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
