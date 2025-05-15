#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  int a[26] = {0};
  for(int i=0; i<s.length(); i++){
    a[s[i] - 'A']++;
  }
  int flag=0;
  for(int i=0; i<26; i++){
    if ((a[i]%2 != 0) && (flag == 0)){
      flag = 1;
    }
    else if ((a[i]%2 != 0)){
      flag = 2;
      break;
    }
  }
  if (flag == 2)
    cout << "NO SOLUTION\n";
  else if (s.length() % 2 == 0){
    if (flag == 1)
      cout << "NO SOLUTION\n";
    else {
      for(int i=0; i<26; i++){
	int temp = a[i];
	while(a[i] != (temp/2)){
	  cout << (char) ('A' + i);
	  a[i]--;
	}
      }
      for(int i=25; i>=0; i--){
	while(a[i] != (0)){
	  cout << (char) ('A' + i);
	  a[i]--;
	}
	  
      }
      cout << "\n";
    }
  }
  else if(flag == 0)
    cout << "NO SOLUTION\n";
  else{
    int odd_indx;
    for(int i=0; i<26; i++){
      if (a[i] % 2 == 1){
	odd_indx = i;
	continue;
      }
      int temp = a[i];
      while(a[i] != (temp/2)){
	cout << (char) ('A' + i);
	a[i]--;
      }
    }
    while (a[odd_indx] !=0){
      cout << (char)('A' + odd_indx);
      a[odd_indx]--;
    }
    for(int i=25; i>=0; i--){
      while(a[i] != (0)){
	cout << (char) ('A' + i);
	a[i]--;
      }
    }
    cout << "\n";
  }
  return 0;
}
