#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>


using namespace std;
void printAnswer(char *word, char *answer,char a, int lenWord);
bool checkChar (char word[], char a, int lenWord);
int compareWord(char *a, char *b, int lenWord);


int main()
{
	char listWord[10][20] = 
	{
		{"about"} , {"above"}, {"cake"}, {"dont"}, {"care"}, 
		{"detail"}, {"discovery"}, {"discuss"}, {"enter"}, {"love"}
	};
	
	int badChoice = 0;
	int correctChoice = 0;
	
	
	srand(time(NULL));
	
	int randomNumber = rand() % 9 + 0;
	//int randomNumber = 7;
	
	int lenWord = strlen(listWord[randomNumber]);
	
	char randomWord[lenWord];
	
	for(int i = 0; i <lenWord ; i++)
	{
		randomWord[i] = listWord[randomNumber][i];
	}
	
	char answer[lenWord+1];
	for(int i=0;i<lenWord;i++)
	{
		answer[i] = '-';
	}
	answer[lenWord] = '\0';
	
	do
	{
		cout << "input: \n";
		char a;
		cin >> a;
		
		if(checkChar(randomWord, a, lenWord))
		{
			correctChoice++;
			cout << "Number of wrong guesses: " << badChoice << endl;
			cout << "Your guess: " << a << "\n";
			printAnswer(randomWord, answer,a,lenWord);
			cout << "\n";
		}
		else
		{
			badChoice++;
			cout << "Number of wrong guesses: " << badChoice << endl;
			cout << "Your guess: " << a << endl;
			cout << answer;
			cout << "\n";
		}
				
	}while(badChoice<7 && compareWord(answer, randomWord, lenWord) ==0 ); 
	
	if(compareWord(answer, randomWord, lenWord) ==1)
	{
		cout << "-------------WIN--------------" << endl;
		cout << "Number of wrong guesses: " << badChoice << endl;
		cout << "Word answer is: " << answer << endl;
		cout <<"Congratulations! You win" << endl;
	}
	else
	{
		cout << "-----------FALSE----------";
	}
		
}

bool checkChar (char word[], char a, int lenWord)
{
	for(int i=0;i<lenWord;i++)
	{
		if(word[i]==a)
		{
			return true;
		}
	}
	return false;
}

void printAnswer(char *word, char *answer,char a, int lenWord)
{
	
	int check[lenWord] = {0};
	
	for(int i=0;i<lenWord;i++)
	{
		if(word[i]==a)
		{
			check[i] = 1;
		}
	}
	
	for(int i = 0;i<lenWord;i++)
	{
		if(check[i]==1)
		{
			answer[i] = a;
		}
	}
	
	cout << answer;
	
}

int compareWord(char *a, char *b, int lenWord)
{
	for(int i = 0;i<lenWord;i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}
