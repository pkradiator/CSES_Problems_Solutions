#include "bits/stdc++.h"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
	  long long a, b;
	  cin >> a >> b;
	  if ((a >= b && a <= 2*b) || (a <= b && b <= 2*a))
	      if ((a+b)%3 == 0)
		cout << "YES\n";
	      else
		cout << "NO\n";
	  else
	    cout << "NO\n";
	}
	return 0;
}
