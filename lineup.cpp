#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,cnt=0,cnt2=0;
	cin >> n;
	string arr[n],arr2[n],arr3[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
		arr2[i] = arr[i];
		arr3[i] = arr[i];
	}
	
	sort(arr2, arr2+n);
	reverse(arr3, arr3+n);
	
	for(int i=1; i<n; i++){
		if(arr2[i] != arr[i])
			cnt++;
			break;
	}
	if(cnt==0)
		cout << "INCREASING" <<endl;
	
	for(int i=1; i<n; i++){
		if(arr2[i] != arr[i])
			cnt2++;
			break;
	}
	if(cnt2==0)
		cout << "DECREASING" <<endl;
	
	else
		cout << "NEITHER" <<endl;
	
	return 0;
}
