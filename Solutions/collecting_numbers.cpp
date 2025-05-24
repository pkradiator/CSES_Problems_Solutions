#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector <int> a(n), b(n+1);
  for(int i=0; i<n; i++) {
    cin >> a[i];
    b[a[i]] = i+1;
  }
  int rnds=1;
  for(int i=2; i<n+1; i++){
    if(b[i] < b[i-1]){
      rnds++;
    }
  }
  cout << rnds << "\n";
}
