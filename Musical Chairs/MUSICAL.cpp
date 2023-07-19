/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll maxN = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 7;

ll power(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if(b % 2) res = (res * a) % MOD;
        a = (a*a) % MOD;
        b /= 2;
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m, k;
        cin>>n>>m>>k;
        vector<set<ll> > diff(n);
        vector<ll> c(n), l(k), cnt(n, 0);
        set<ll> a;
        for(ll &i : c) cin >> i;
        for(ll &i : l) cin >> i;
        ll s = 0;
        for(ll i = 0; i < k; i++) {
            s += l[i];
            s %= n;
            a.insert(s);
        }
        for(ll i = 0; i < n; i++) for(ll j : a) diff[i].insert(c[(i + j) % n]);
        ll sum = 0;
        for(ll i = 0; i < n; i++) {
            cnt[i] = diff[i].size();
            sum += (m - cnt[i]) % MOD;
            sum %= MOD;
        }
        for(ll i = 0; i < n; i++) {
            ll x,y;
            cin >> x >> y;
            if(diff[x-1].find(y) != diff[x-1].end()) sum += cnt[x-1] - m;
            else {
                sum += cnt[x-1] - m;
                sum += m;
            }
            sum %= MOD;
            cout << (sum * power(m, MOD-2)) % MOD << " ";
        }
        cout << endl;
    }
	return 0;
}

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
