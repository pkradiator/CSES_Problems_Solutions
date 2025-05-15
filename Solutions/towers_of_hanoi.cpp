#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
void hanoi(int nums, int a, int b, int c){
  if (nums == 1){
    cout << a << " " << c << "\n";
    return;
  }
  hanoi(nums-1, a, c, b);
  hanoi(1,a, b, c);
  hanoi(nums-1, b, a, c);
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cout << pow(2,n) - 1 << "\n";
  hanoi(n, 1, 2, 3);
  return 0;
}
