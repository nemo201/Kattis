#include <iostream>
using namespace std;

int main(){
	int r,n,a=1,cnt=0;
	cin >> r >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	if(r == n)
		cout << "too late" << endl;
	else{
		for(int i=0; i<n; i++){
			if(a != arr[i] && cnt > n){
				break;
			}
			else{
				cnt++;
				a++;
			}
				
		}
		cout << a << endl;
		
	}
}

