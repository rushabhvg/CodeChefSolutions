/*
BY>>m RUS>>x0>>y0>>l;HABH GALA
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
    int n, m, x0, y0, l;
    int ans = 0;
    cin>>n>>m>>x0>>y0>>l;
    if(x0-1<n && y0-1<m) ans = 1;
    int diffXUp = (x0-1)/l, diffXDown=(n-x0)/l, diffYLeft = (y0-1)/l, diffYRight = (m - y0)/l;
    int movesX = diffXUp + diffXDown + 1;
    int movesY = diffYLeft + diffYRight + 1;
    cout << (movesX*movesY) << "\n";
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
