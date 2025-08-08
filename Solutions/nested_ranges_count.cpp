#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
typedef tree<int, null_type,less_equal<int>,rb_tree_tag,
	     tree_order_statistics_node_update> indexed_set;
typedef tree<int, null_type,greater_equal<int>,rb_tree_tag,
	     tree_order_statistics_node_update> indexed_set_r;
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<array<int, 3>> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i][0] >> a[i][1];
    a[i][2] = i;
  }
  sort(a.begin(), a.end(), [](array <int,3> a, array<int, 3> b){
    if(a[0] == b[0])
      return a[1] > b[1];
    else
      return a[0] < b[0];
  });
  indexed_set s;
  indexed_set_r t;
  vector<pair<int, int>> ans(n);
  for(int i=n-1; i>=0; i--){
    // if(s.order_of_key(a[i][1]) == s.order_of_key(a[i][1] + 1)){
    //   ans[a[i][2]].first = s.order_of_key(a[i][1]);      
    // }
    // else {
      ans[a[i][2]].first = s.order_of_key(a[i][1] + 1);
      // }				
    s.insert(a[i][1]);
  }
  for(int i=0; i<n; i++){
    // if(t.order_of_key(a[i][1]) == t.order_of_key(a[i][1] - 1)){
    //   ans[a[i][2]].second = t.order_of_key(a[i][1]);
    // }
    // else {
      ans[a[i][2]].second = t.order_of_key(a[i][1] - 1);
    // }
    t.insert(a[i][1]);
  }
  for(int i=0; i<n; i++){
    cout << ans[i].first << " ";
  }
  cout << "\n";
  for(int i=0; i<n; i++){
    cout << ans[i].second << " ";
  }
  cout << "\n";
}
