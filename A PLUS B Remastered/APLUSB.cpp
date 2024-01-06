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
    vll arrA(n, 0), arrB(n, 0), arrC(n, 0);
    for(auto& a:arrA) cin>>a;
    for(auto& a:arrB) cin>>a;
    sort(arrA.begin(), arrA.end());
    sort(arrB.rbegin(), arrB.rend());
    
    ll s = arrA[0]+arrB[0];
    bool chk=true;
    for(int i=0; i<n; i++) {
        if(arrA[i]+arrB[i]!=s) {
            chk = false;
            break;
        }
    }
    if(!chk) {
        cout<<"-1\n";
        return;
    }
    for(auto& a:arrA) cout<<a<<" ";
    cout<<"\n";
    for(auto& a:arrB) cout<<a<<" ";
    cout<<"\n";
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
