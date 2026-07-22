#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    vector<int> p(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        p[a[i]] = i;
    }
    int ans = 0, curr = 0;
    for(int i = 1; i <= n; i++){
        if(p[i] < i) curr--;
        curr++;
        ans = max(ans, curr);
    }
    cout << ans << "\n";
}

int main() {
    fast;
    int t = 1;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}