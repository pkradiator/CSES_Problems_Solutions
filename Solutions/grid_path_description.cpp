#include <bits/stdc++.h>

using namespace std;

int a[9][9];
string s;
int i,j;
int ways;

void path_finder(int len){
  if(len == 48 && (i == 1 && j == 7)){
    ways++;
    return;
  }
  if(a[1][7]==1){
    return;
  }
  if (s[len] == 'U' || s[len] == '?'){
    if((a[i][j-1] == 0) &&
       !((a[i][j-2] == 1) && (a[i-1][j-1] == 0 && a[i+1][j-1] == 0))){
      a[i][j-1] = 1;
      j--;
      path_finder(len + 1);
      j++;
      a[i][j-1] = 0;
    }
  }
  if (s[len] == 'D' || s[len] == '?'){
    if((a[i][j+1] == 0) &&
       !((a[i][j+2] == 1) && (a[i-1][j+1] == 0 && a[i+1][j+1] == 0))){
      a[i][j+1] = 1;
      j++;
      path_finder(len + 1);
      j--;
      a[i][j+1] = 0;
    }
  }
  if (s[len] == 'L' || s[len] == '?'){
    if((a[i-1][j] == 0) &&
       !((a[i-2][j] == 1) && ( a[i-1][j-1] == 0 && a[i-1][j+1] == 0))){
      a[i-1][j] = 1;
      i--;
      path_finder(len + 1);
      i++;
      a[i-1][j] = 0;
    }
  }
  if (s[len] == 'R' || s[len] == '?'){
    if((a[i+1][j] == 0) &&
       !((a[i+2][j] == 1) && (a[i+1][j-1] == 0 && a[i+1][j+1] == 0))){
      a[i+1][j] = 1;
      i++;
      path_finder(len + 1);
      i--;
      a[i+1][j] = 0;
    }
  }
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      a[i][j] = 1;
    }
  }
  for(int i=1; i<=7; i++){
    for(int j=1; j<=7; j++){
      a[i][j] = 0;
    }
  }
  a[1][1] = 1;
  i=1 , j=1, ways=0;
  path_finder(0);
  cout << ways << "\n";
}
