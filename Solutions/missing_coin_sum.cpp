#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, flag=0; cin >> n;
  vector <int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  long long sum = 0;
  for(int i=0; i<n; i++){
    if(a[i] > sum + 1){
      cout << sum + 1 << "\n";
      flag =1;
      break;
    }
    sum += a[i];
  }
  if(flag == 0){
    cout << sum + 1 << "\n";
  }
}
