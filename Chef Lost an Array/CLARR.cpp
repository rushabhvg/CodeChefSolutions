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

bool chkD(vll arrA, ll d) {
    for(int i=0; i<arrA.size()-1; i++) if(abs(arrA[i]-arrA[i+1])>d) return false;
    return true;
}

bool chkV(vll arrV) {
    for(int i=0; i<arrV.size(); i++) if(!arrV[i]) return false;
    return true;
}

void solve() {
    ll n, d;
    cin>>n>>d;
    
    vll arrA(n), arrB(n), arrC(n);
    std::vector<pair<ll, ll>> rangeForIdx;
    
    for(auto &a:arrB) cin>>a;
    for(auto &a:arrC) cin>>a;
    
    if (arrB[0] != arrC[0]) {
        cout << "NO" << endl;
        return;
    }
    
    ll mn = arrB[0];
    ll mx = arrB[0];
    rangeForIdx.push_back({mn, mx});
    
    for(ll i=1; i<n; i++) {
        if(arrB[i] > mx) {
            rangeForIdx.push_back({arrB[i], arrB[i]});
            mx = arrB[i];
        } else if (arrC[i] < mn) {
            rangeForIdx.push_back({arrC[i], arrC[i]});
            mn = arrC[i];
        } else {
            ll newMIN = max(mn, rangeForIdx[i-1].first - d);
            ll newMAX = min(mx, rangeForIdx[i-1].second + d);
            rangeForIdx.push_back({newMIN, newMAX});
        }
        if(mx!=arrB[i] || mn!=arrC[i]) {
            cout<<"NO"<<endl;
            return;
        }
    }
    
    ll nxt = rangeForIdx[n-1].first+d;
    for(ll i=n-1; i>=0; i--) {
        ll minNum = nxt-d;
        ll maxNum = nxt+d;
        
        if(minNum>rangeForIdx[i].second || maxNum < rangeForIdx[i].first) {
            cout<<"NO"<<endl;
            return;
        }
        
        minNum = max (minNum, rangeForIdx[i].first);
        maxNum = min (maxNum, rangeForIdx[i].second);
        nxt = minNum;
        arrA[i] = minNum;
    }
    
    cout<<"YES\n";
    for(int i=0; i<n; i++) {
        cout<<arrA[i]<<" ";
    }
    cout<<endl;
    
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
