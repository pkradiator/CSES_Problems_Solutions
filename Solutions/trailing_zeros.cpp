#include "bits/stdc++.h"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n, p2=0, p5=0;
	cin >> n;
	for (int i=2; i<= n; i*=2){
		p2+= n/i;
	}
	for (int i=5; i<= n; i*=5){
		p5+= n/i;
	}
	if (p2 <= p5)
		cout << p2 << "\n";
	else
		cout << p5 << "\n";
}
