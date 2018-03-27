#include <iostream>
using namespace std;

// your code here
bool majority(bool a, bool b, bool c){
    int ret;
	((a==b) && (b==c) && (a == 1))? ret=1 : (a==b && b==1 )? ret =1 : (a==c && c==1 )? ret =1 : (c==b && b==1 )? ret =1 : ret=0;

	return ret;
}

int main(){
	bool a, b, c;
	cin >> a >> b >> c;
	if(majority(a, b ,c)) {
		cout << "true";
	} else {
		cout << "false";
	}
	return 0;
}
