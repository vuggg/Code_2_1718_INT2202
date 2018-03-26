
int getUserWordLength()
{
    int wordLength;
    std::cout << "Please input word length: " << std::endl;
    std::cin >> wordLength;
    return wordLength;
}
string getUserAnswer()
{
    string answer;
    std::cout << "Input your answer:" << std::endl;
    std::cin >> answer;
    return answer;
}
void initialize(int &wordLength, string &secretWord, int &incorectGuess, get<char> &[previousGuesses, bool &stop])
{
    wordLength = getUserWordLength();
    secretWord = string(wordLength, '-');
    incorectGuess = 0;
    previousGuesses = set<char>();
    stop = false;
}
