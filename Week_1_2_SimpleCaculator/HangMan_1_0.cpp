#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>


using namespace std;
void printAnswer(char *word, char *answer,char a, int lenWord);
bool checkChar (char word[], char a, int lenWord);
int compareWord(char *a, char *b, int lenWord);
void print(int i);


int main()
{
	char listWord[200][20] = {
"angle", "ant", "apple", "arch", "arm", "army",
"baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
"bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
"brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
"cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
"chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
"cow", "cup", "curtain", "cushion",
"dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
"face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
"foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
"hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
"hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
"leaf", "leg", "library", "line", "lip", "lock",
"map", "match", "monkey", "moon", "mouth", "muscle",
"nail", "neck", "needle", "nerve", "net", "nose", "nut",
"office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
"pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
"rail", "rat", "receipt", "ring", "rod", "roof", "root",
"sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
"shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
"square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
"store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
"toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
"wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
};
	
	int badChoice = 0;
	int correctChoice = 0;
	
	
	srand(time(NULL));
	
	int randomNumber = rand() % 200 + 0;
	
	
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
			cout << "Answer: "; printAnswer(randomWord, answer,a,lenWord);
			cout << "\n";
			if(badChoice!=0)
			{
				print(badChoice);
			}
			
			
		}
		else
		{
			badChoice++;
			cout << "Number of wrong guesses: " << badChoice << endl;
			cout << "Your guess: " << a << endl;
			cout << answer;
			cout << "\n";
			if(badChoice!=0)
			{
				print(badChoice);
			}
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

void print(int i)
{
	
 char FIGURE[8][100] = {"------------- \n| \n| \n| \n| \n| \n----- \n ",
 "------------- \n | | \n | \n | \n | \n | \n ----- \n" ,
 "------------- \n | | \n | O \n | \n | \n | \n ----- \n ",
 "------------- \n | | \n | O \n | | \n | \n | \n ----- \n ",
 "------------- \n | | \n | O \n | /| \n | \n | \n ----- \n ",
 "------------- \n | | \n | O \n | /|\\ \n | \n | \n ----- \n ",
 "------------- \n | | \n | O \n | /|\\ \n | / \n | \n ----- \n ",
 "------------- \n | | \n | O \n | /|\\ \n | / \\ \n | \n ----- \n" ,};
  
  cout << FIGURE[i];
}


