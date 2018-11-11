#include <iostream>
using namespace std;

int main(){
	int values, list[30] = {};
	cout << "How many input values[max: 30]?\n";
	cin >> values;
	cout << "Enter " << values << " numbers.\n";
	for (int i = 0; i < values; i++){
		cin >> list[i];
	}

	int biggestNum = list[0], temp;
	for (int i = 0; i < values; i++){
		temp = list[i];
		if (temp > biggestNum){
			biggestNum = temp;
		}
		
	}
	cout << "Largest Number: " << biggestNum << endl;

	/*for (int i = 0; i < values; i++){
		if (list[i] == list[i + 1])
			;
	}*/

	return 0;
}
