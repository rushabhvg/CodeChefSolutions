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

void solve() {
    int n, xorF, xorP;
    cin>>n;
    vector<int> arr(n, -1), xorArr;
    for(int i=0; i<n; i++) cin>>arr[i];
    xorF = arr[0];
    for(int i = 1; i<n; i++) {
        xorF = xorF ^ arr[i];
    }
    // cout<<xorF<<" ";
    if(xorF==0) {
        cout<<0<<endl;
        return;
    }
    xorP = xorF;
    // for non zero xorF
    for (int i=0; i<n; i++) {
        xorP = min(xorP, xorF^arr[i]);
    }
    cout<<xorP<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0; cin>>t;
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
