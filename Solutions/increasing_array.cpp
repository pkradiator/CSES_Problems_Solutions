#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n,x, max=0;
	long long sum=0;
	cin >> n;
	for(int i=0; i< n; i++){
		cin >> x;
		if (x > max) {
			max = x;
		} else if (x < max) {
			sum = (sum + max) - x;
		}
	}
	cout << sum << "\n";
}
