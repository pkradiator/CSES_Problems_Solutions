#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b){
  return a.second < b.second;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long n, inp, mx, sum;
  cin >> n;
  mx = INT_MIN , sum=0;
  for(int i=0; i<n; i++){
    cin >> inp;
    sum = max(inp, sum+inp);
    mx = max(mx, sum);
  }
  cout << mx << "\n";
}
