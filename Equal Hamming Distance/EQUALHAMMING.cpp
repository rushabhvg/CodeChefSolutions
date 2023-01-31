
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

typedef long long ll;

ll powmod(ll a, ll b, ll p){
    a %= p;
    if (a == 0) return 0;
    ll product = 1;
    while(b > 0){
        if (b&1){    // you can also use b % 2 == 1
            product *= a;
            product %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    // you can also use b >> 1
    }
    return product;
}

ll inv(ll a, ll p){
    return powmod(a, p-2, p);
}

vector<ll> fact(2e5+1);

ll nCk(ll n, ll k, ll p){
    return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n-k], p)) % p;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	ll MOD = 1e9 + 7;
	
	fact[0] = 1;
	for (ll i = 1; i <= 2e5; ++i) fact[i] = (fact[i-1] * i) % MOD;
	
	int t;
	
	cin >> t;
	while (t--) {
	    int n;
	    string A, B;
	    cin >> n >> A >> B;
	    
	    ll equal = 0;
	    ll diff  = 0;
	    for (int i = 0; i < n; ++i) {
	        equal += A[i] == B[i];
	        diff  += A[i] != B[i];
	    }
	    
	    ll ans = 0;
	    if (diff % 2 == 0)
	        ans = (powmod(2, equal, MOD) * nCk(diff, diff/2, MOD)) % MOD;
	   cout << ans << '\n';
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
