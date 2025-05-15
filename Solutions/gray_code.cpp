#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
vector <int> gc;
void search(int k, int state){
  if (k == n +1) {
    for(int i=0; i<n; i++){
      cout << gc[i];
    }
    cout << "\n";
    return;
  }
  else if (state == 0){
    gc.push_back(0);
    search(k+1, 0);
    gc.pop_back();
    gc.push_back(1);
    search(k+1, 1);
    gc.pop_back();
  }
  else {
    gc.push_back(1);
    search(k+1, 0);
    gc.pop_back();
    gc.push_back(0);
    search(k+1, 1);
    gc.pop_back();
  }
}
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  search(1, 0);
  return 0;
}
