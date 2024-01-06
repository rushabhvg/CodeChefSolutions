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
    ll n;
    cin>>n;
    ll cnt = 0;
    vll arr(n, 0);
    for(auto &a:arr) cin>>a;
    vll mn;
    mn.push_back(arr[0]);
    for(int i=1; i<n; i++) {
        if(arr[i]<=mn.back()) {
            mn.push_back(arr[i]);
        }
    }
    int ans = n;
    reverse(mn.begin(), mn.end());
    for(int i=0; i<mn.size(); i++) {
        ans = min(ans, int(n)-i-1+(int)(mn[i]) );
    }
    cout<<ans<<"\n";
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
