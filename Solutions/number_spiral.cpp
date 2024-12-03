#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long y, x, val;
		cin >> y >> x;
		if (x % 2 == 0) {
			if (y <= x) val = (x-1)*(x-1) + y;
			else if (y % 2 == 0) val = (y)*(y) - x + 1;
			else val = (y-1)*(y-1) + x;
		}
		else {
			if (y <= x) val = (x)*(x) - y + 1;
			else if (y % 2 == 0) val = y*y -x + 1;
			else val = (y-1)*(y-1) + x; 
		}
		cout << val << "\n";
	}
}
