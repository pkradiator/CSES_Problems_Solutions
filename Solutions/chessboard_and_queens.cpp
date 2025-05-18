#include <bits/stdc++.h>
 
using namespace std;
 
long long ways;
int column[8], diag1[15], diag2[15], loc[15][15];
int n=8;

void find_ways(int k){
  if(k == n){
    ways += 1;
  } else {
    for(int i=0; i<8; i++){
      if((loc[k][i] == 0) && (column[i] == 0) && (diag1[k+i] == 0) && (diag2[15- (8-k)-i] == 0)){
	column[i]=1, diag1[k+i]=1, diag2[15- (8-k)-i] = 1;
	find_ways(k+1);
	column[i]=0, diag1[k+i]=0, diag2[15- (8-k)-i] = 0;
      }
    }
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  ways =0;
  for(int i=0; i<8; i++){
    cin >> s;
    for(int j=0; j< 8; j++){
      if(s[j] == '.'){
	loc[i][j] = 0;
      } else {
	loc[i][j] = 1;
      }
    }
  }
  for(int i=0; i<8; i++){
    column[i] =0;
  }
  for(int i=0; i<15; i++){
    diag1[i] = 0; diag2[i]=0;
  }
  find_ways(0);
  cout << ways << "\n";
}
