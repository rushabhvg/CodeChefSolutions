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
#define int long long int
#define double long double

const int MOD = 1000000007;

void solve() {
    int mx = 0, mxi = 0;
    for(int i=0; i<22; i++) {
        int a, b;
        cin>>a>>b;
        int temp = ( a + (b*20) );
        // cout<<"\n"<<a<<" "<<b<<"\t"<<temp;
        if(temp>mx) {
            mx = temp;
            mxi = i;
        }
    }
    cout<< (mxi+1) <<"\n";
}

signed main() {
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
