#include "bits/stdc++.h"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	long long result=1;
	cin >> n;
	for (int i=0; i<n; i++){
		result = (result * 2) % 1000000007;
	}
	cout << result << "\n";
}
