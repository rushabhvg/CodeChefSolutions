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
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll> a(n, 0);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        vector<ll> l(n, 0), r(n, 0);
        l[0] = a[0];
        for(int i=1; i<n; i++) {
            l[i] = max(l[i-1], a[i]);
        }
        r[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--) {
            r[i] = max(a[i], r[i+1]);
        }
        ll sum = 0;
        for(int i=0; i<n; i++) {
            sum += min(l[i], r[i]);
        }
        cout<<sum<<endl;
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
