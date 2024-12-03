#include "bits/stdc++.h"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	long long n,sum=0;
	vector<int> first, second;
	cin >> n;
	if(((n)*(n+1)) % 4 == 0){
		cout << "YES\n";
		for(int i=n; i > 0; i--){
			if(sum+i <= (((n)*(n+1)) / 4)){
				sum +=i;
				first.push_back(i);
			}
			else 
				second.push_back(i);
		}
		cout << first.size() << "\n";
		for(int i=0; i < first.size(); i++)
			cout << first[i] << " ";
		cout << "\n";
		cout << second.size() << "\n";
		for(int i=0; i < second.size(); i++)
			cout << second[i] << " ";
		cout << "\n";
	}
	else 
		cout << "NO\n"; 
}
