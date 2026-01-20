#include <bits/stdc++.h>
#define MOD 1000000007
 
using namespace std;
using ll = long long;
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector <int> value(n+1);
  value[0] = 1;
  for(int i=1; i<=n; i++){
    value[i] = 0;
    for(int j=1; j<=6; j++){
      if(i - j >= 0){
	value[i] += value[i-j];
	value[i] %= MOD;
      }
    }
  }
  cout << value[n] << "\n";
}
