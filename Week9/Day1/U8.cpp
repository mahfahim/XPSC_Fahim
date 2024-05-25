#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        long long s = accumulate(v.begin(), v.end(), 0ll), current = 0;
        long long ans = 1;
        for (int i = 0; i < n - 1; i++) {
            current += v[i], s -= v[i];
            ans = max(ans, __gcd(s, current));
        }
        cout << ans << "\n";
    }
}