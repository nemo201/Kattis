#include <iostream>
using namespace std;

int main(){
	int n,t,mon=0,time=0;
	cin >> n >> t;
	int c[n],p[n];
	for(int i=0; i<n; i++){
		cin >> c[i] >> p[i];
		if(p[i] == 0){
			mon+=c[i];
		}
		else if(time+p[i] <= t && time<p[i]){
			mon+=c[i];
			time+=p[i];
		}
	}
	cout << mon << endl;
	cout << time << endl;
}
