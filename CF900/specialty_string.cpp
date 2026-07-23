#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < n; i++){
        if(st.size() && st.top() == s[i]) st.pop();
        else st.push(s[i]);
    }
    cout << (st.empty() ? "YES" : "NO") << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}