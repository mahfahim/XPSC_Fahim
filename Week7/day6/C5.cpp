//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

char func(int i) {
    return 'a' + i - 1;
}

void solution() {
    int n;
    string s;
    cin >> n >> s;
    int i = n - 1;
    string ss;
    while (i >= 0) {
        if (s[i] != '0') {
            ss += func(s[i] - '0');
            i--;
        } else {
            ss += func(stoi(s.substr(i - 2, 2)));
            i -= 3;
        }
    }
    reverse(ss.begin(), ss.end());
    cout << ss << '\n';
}

int main() {
    int t = 1;
    cin >> t;
    for (int idx = 0; idx < t; ++idx) {
        solution();
    }
    return 0;
}
    //********* Alhamdulillah *********
