#include <bits/stdc++.h>
using namespace std;
#define finish(z) return cout << z << endl, 0
#define ll long long

ll z;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> z;
    vector <ll> p;
    for(ll i = 2 ; i * i <= z ; i++){
        if(z % i == 0){
            ll cur = 1;
            while(z % i == 0){
                z /= i;
                cur *= i;
            }
            p.push_back(cur);
        }
    }
    if(z > 1) p.push_back(z);
    int n = p.size();
    ll answ = 1e18, ansb = 1e18;
    for(int i = 0 ; i < (1 << n) ; i++){
        ll a = 1, b = 1;
        for(int j = 0 ; j < n ; j++){
            if((i >> j) & 1) a *= p[j];
            else b *= p[j];
        }
        if(max(a, b) < max(answ, ansb)){
            answ = a;
            ansb = b;
        }
    }
    cout << answ << " " << ansb << endl;
}