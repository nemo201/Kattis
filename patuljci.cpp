#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void find_extra(int* arr, int sum){
	rep(i,1,9){
		rep(j,0,i){
			if(sum - arr[i] - arr[j] == 100){
				rep(k,0,9){
					if(k != i && k!= j)
						cout << arr[k] << endl;
				}
			}
		}
	}
}

int main() {
	int sum=0;
	int arr[9];
	rep(i,0,9){
		cin >> arr[i];
		sum+=arr[i];
	}
	find_extra(arr, sum);
	return 0;
}
