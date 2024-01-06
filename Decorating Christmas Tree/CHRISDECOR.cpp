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

#define ll long long int
#define vll std::vector<long long int>

void solve() {
    ll n, x, y;
    cin>>n>>x>>y;
    ll d = (floor)(y/3);
    if(x<n) {
        cout<<"NO\n";
    } else if( ( (2*n)<=x ) ) {
        cout<<"YES\n";
    } else if ( 2*(n-d) <= ( (x-d) ) ) {
        cout<<"YES\n";
        // cout<<d<<"\t"<<n-d<<"\t"<<2*(x-d)<<endl;
    }
    else {
        cout<<"NO\n";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin>>t;
    while (t--) {
        solve();
    }
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
