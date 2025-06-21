#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, t; cin >> n >> t;
  vector <ll> a(n);
  for(ll i=0; i<n; i++){
    cin >> a[i];
  }
  auto valid = [&] (ll k) -> bool {
    ll prod = 0;
    for(ll i=0; i<n; i++){
      prod += k / a[i];
      if(prod >= t){
	return true;
      }
    }
    return false;
  };
  ll ans = -1;
  for(ll i=a[0] * t; i >= 1; i /= 2) {
    while(!valid(ans+i)) {
      ans += i;
    }
  }
  cout << ans + 1 << "\n";
  
}
