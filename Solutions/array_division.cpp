#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, k, sum=0; cin >> n >> k;
  vector <ll> a(n);
  for(ll i=0; i<n; i++){
    cin >> a[i];
    sum += a[i];
  }
  auto valid = [&](ll q) -> bool{
    ll divs=1, cur_sum=0;
    for(ll i=0; i<n; i++){
      if(cur_sum + a[i] <= q){
	cur_sum += a[i];
      }
      else {
	if(a[i] > q){
	  return false;
	}
	cur_sum = a[i];
	divs++;
      }
      if(divs > k){
	return false;
      }
    }
    return true;
  };
  ll ans = -1;
  for(ll i=sum; i >= 1; i /= 2){
    while(!valid(ans+i)) {
      ans += i;
    }
  }
  cout << ans + 1 << "\n";
}

