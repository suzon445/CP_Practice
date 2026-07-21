#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
    int x, y;
    cin >> x >> y;
    if(x < y or x % y != 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
  }

  return 0;
}