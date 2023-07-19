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

#define ll long long

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        std::vector<ll> arr;
        for(ll i=0; i<n; i++) {
            ll temp=0;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        ll ans = 0;
        for(ll i=0; i<n; i++) {
            ans += arr[i];
        }
        for(ll i=0; i<n; i++) {
            cout<<ans<<" ";
            ans -= arr[i];
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
