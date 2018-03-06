void renderGame(string guessedWord, int badGuessCount)
{
	cout << "Current guess = " << guessedWord << endl;
	cout << "You have made " << badGuessCount << " bad guess(es)\n";
	string getHanger( badGuessCount);
}
string getHanger(int badGuessCount)
{
	const string draw[] = { ""," |", " | /n  O\n",
	" | /n  O\n / \n",
	"| /n  O\n /| \n",
	"| /n  O\n /|\ \n",
	"| /n  O\n /|\ \n / \n",
	"| /n  O\n /|\ \n /  \n",
	" | \n O \n/\\\n/|\\"};
	
	string a = draw[badGuessCount];
	return draw;
}
