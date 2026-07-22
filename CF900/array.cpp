#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n; 
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int l = 0, r = 0;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]) l++;
            else if(a[j] > a[i]) r++;
        }
        cout << max(l, r) << " \n"[i == n - 1];
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}