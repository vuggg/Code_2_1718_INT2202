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
