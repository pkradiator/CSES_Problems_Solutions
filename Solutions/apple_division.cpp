#include <bits/stdc++.h>
 
using namespace std;
 
vector <int> a;
long long min_diff, cur_sum, sum;
int n;

void diff_min(int k){
  if(k == n){
    return;
  } else {
    cur_sum += a[k];
    if(abs(sum - 2 * cur_sum) < min_diff){
      min_diff = abs(sum - 2 * cur_sum);
    }
    diff_min(k+1);
    cur_sum -= a[k];
    if(abs(sum - 2 * cur_sum) < min_diff){
      min_diff = abs(sum - 2 * cur_sum);
    }
    diff_min(k+1);
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  int k;
  min_diff=0;
  cur_sum=0;
  sum=0;
  for(int i=0; i<n; i++){
    cin >> k;
    a.push_back(k);
    min_diff += k;
    sum +=k;
  }
  diff_min(0);
  cout << min_diff << "\n";
}
