#include <bits/stdc++.h>
#define MOD 1000000007
 
using namespace std;
using ll = long long;
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,x; cin >> n >> x;
  vector <int> coins(n), value(x+1);
  for(int i=0; i<n; i++){
    cin >> coins[i];
  }
  value[0] = 0;
  for(int i=1; i<=x; i++){
    value[i] = INT_MAX;
    for(auto c: coins){
      if(i-c >= 0 && value[i-c] != INT_MAX){
	value[i] = min(value[i], value[i-c]+1);
      }
    }
  }
  if(value[x] != INT_MAX)
    cout << value[x] << "\n";
  else
    cout << -1 << "\n";
}
