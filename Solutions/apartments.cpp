#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m, k;
  cin >> n >> m >> k;
  vector <int> ds_sz(n), apt(m);
  for(int i=0; i<n; i++){
    cin >> ds_sz[i];
  }
  for(int i=0; i<n; i++){
    cin >> apt[i];
  }
  sort(ds_sz.begin(), ds_sz.end());
  sort(apt.begin(), apt.end());
  int i=0, j=0, ans=0;
  while(i != n && j != m){
    if((max(1, ds_sz[i] - k) <= apt[j]) && ((ds_sz[i] + k) >= apt[j])){
      ans++;
      j++;
      i++;
      continue;
    } else {
      if(apt[j] < max(1,ds_sz[i] - k)){
	j++;
	continue;
      } else {
	i++;
	continue;
      }
    }
  }
  cout << ans << "\n";
}
