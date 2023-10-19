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

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--) {
        ll n, m;
        cin>>n>>m;
        vector<ll> a(n, 0);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        vector<ll> b(n, 0);
        b[0] = a[0];
        for(ll i=1; i<n; i++) {
            ll x = m/a[i];
            x*=a[i];
            for(ll j=x; j>=0; j-=a[i]) {
                if(__gcd(j,a[i-1])==a[i]) {
                    b[i]=j;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++) {
            cout<<b[i]<<" ";
        }
        cout<<endl;
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
