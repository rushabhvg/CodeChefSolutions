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
    ll n, x;
    cin>>n>>x;
    
    if(x==0) {
        for(int i=1; i<=n; i++) {
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    
    if( ( x+2 > n ) || ( ( n<=3 ) && ( ( (n-x) <= 1 ) ) ) ) {
        cout<<"-1\n";
        return;
    }
    
    if(n==3 && x==1) {
        cout<<"3 1 2\n";
        return;
    }
    
    ll i = 1;
    
    for( ; i< ( ( n-x ) -1 ) ; i++ ) {
        cout<<i<<" ";
    }
    cout<<n<<" ";
    for( ; i<n; i++) {
        cout<<i<<" ";
    }
    cout<<"\n";
    // ???
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
