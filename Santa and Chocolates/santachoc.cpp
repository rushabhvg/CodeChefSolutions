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
        ll n, k, sum1=0;
        cin>>n>>k;
        for(ll i=0; i<n; i++) {
            ll x;
            cin>>x;
            sum1 += x;
        }
        // cout<<sum1<<endl;
        if(sum1<n) {
            cout<<"NO"<<endl;
            continue;
        }
        // cout<<"sum1 is more"<<endl;
        sum1 = sum1%n;
        if(k==0 && sum1!=0) {
            // cout<<"k==0 && sum1!=0"<<endl;
            cout<<"NO"<<endl;
        } else {
            // cout<<"In else"<<endl;
            cout<<"YES"<<endl;
        }
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
