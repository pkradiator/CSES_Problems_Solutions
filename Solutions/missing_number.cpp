#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	long long n, a;
	cin >> n;
	n = (n * (n + 1))/2;
	while (cin >> a){
		n = n - a;
	}
	cout << n << "\n";

}
