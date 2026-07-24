#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s; cin >> s;
    int n = s.size();
    int ans = 0;
    if(s[0] == 'u') ans++;
    if(s[n-1] == 'u') ans++;
    for(int i = 0; i < n - 1; i++){
        int j = i + 1;
        int cur = 0;
        while(j < n - 1 && s[j] == 'u'){
            cur++;
            j++;
        }
        if(cur >= 2){
            ans += (cur / 2);
        }
        i = j - 1;
    }
    cout << ans << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}