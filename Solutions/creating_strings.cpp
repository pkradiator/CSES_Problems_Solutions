#include <bits/stdc++.h>
 
using namespace std;
 
vector <string> perms;
string perm, s;
int n;
void gen_perm(int k, vector <bool> &selected){
  if(perm.length() == s.length()){
    perms.push_back(perm);
  } else {
    for(int i=0; i<s.length(); i++){
      if(selected[i] == 0 && (i == 0 || (selected[i-1] == 1) || (s[i] != s[i-1]))){
	  perm.push_back(s[i]);
	  selected[i] = 1;
	  gen_perm(k+1, selected);
	  perm.pop_back();
	  selected[i] = 0;
      }
    }
  }
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  sort(s.begin(), s.end());
  n = s.length();
  vector <bool> selected(n, 0);
  gen_perm(0,selected);
  cout << perms.size() << "\n";
  for(auto x: perms){
    cout << x << "\n";
  }
}
