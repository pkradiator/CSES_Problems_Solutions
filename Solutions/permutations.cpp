#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin >> n;
	vector<int> beg_perm, end_perm;
	if (n == 1) cout << "1\n";	
	else if (n <= 3 && n > 1) cout << "NO SOLUTION" << "\n";
	else {
		for(int i = n; i > 0; i--){
			if ((n % 2) == (i % 2)) end_perm.push_back(i);
			else beg_perm.push_back(i);
		}
		for (int i = 0; i < beg_perm.size(); i++) cout << beg_perm[i] << " ";
		for (int i = 0; i < end_perm.size(); i++) cout << end_perm[i] << " ";
		cout << "\n";
	}
}
