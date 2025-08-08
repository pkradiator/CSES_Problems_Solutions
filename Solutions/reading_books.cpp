#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int n; cin >> n;
    vector <int> a(n);
    int grt=0;
    ll sum_p = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > grt){
            sum_p += grt;
            grt = a[i];
        }else{
            sum_p += a[i];
        }
    }
 
    if(sum_p > grt){
        cout << sum_p + grt << "\n";
    }
    else {
        cout << 2* grt << "\n";
    }
}
