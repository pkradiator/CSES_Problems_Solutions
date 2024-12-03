#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	long long a;
	cin >> a;
	while(1){
		if (a == 1) break;
		cout << a << " ";
		if (!(a % 2))
			a = a / 2;
		else
			a = 3*a + 1;
	};
	cout << "1\n";
}
