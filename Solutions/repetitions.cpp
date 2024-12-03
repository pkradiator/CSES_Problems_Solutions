#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	string s;
	cin >> s;
	int i, max_len=1, cur=1;
	for (i = 0; i < (s.length() - 1); i++){
		if (s[i] == s[i+1]) cur++;
		else cur = 1;
		if (cur > max_len) max_len = cur;
	}
	cout << max_len << "\n";
}
