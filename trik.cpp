#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a=1,b=0,c=0;
	string str;
	cin >> str;
	int len = str.length();
	for(int i=0; i<len; i++){
		if(str[i] == 'A'){
			swap(a,b);			
		}
		else if(str[i] == 'B'){
			swap(b,c);
		}
		else {
			swap(a,c);
		}
	}
	if(a)
		puts("1");
	else if(b)
		puts("2");
	else
		puts("3");
	return 0;
}
