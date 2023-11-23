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
#define vll std::vector<long long int>

bool chk(vll &arrA) {
    for(int i=0; i<arrA.size()-1; i++) if(arrA[i]>arrA[i+1]) return false;
    return true;
}

void solve() {
    int n;
    cin>>n;
    vll arrA(n), arrAColor(n), arrB(n), arrBColor(n);
    
    map<ll,multiset<ll>>mp;
    map<ll,ll>isb;
    
    for(int i=0; i<n; i++) cin>>arrA[i];
    for(int i=0; i<n; i++) cin>>arrAColor[i];
    for(int i=0; i<n; i++) cin>>arrB[i];
    for(int i=0; i<n; i++) cin>>arrBColor[i];
    
    if(arrA.size()<2 || chk(arrA)) {
        cout<<"Yes"<<endl;
        return;
    }
    // cout<<"No"<<endl;
    for(ll i=0;i<n;i++) {
        mp[arrAColor[i]].insert(arrA[i]);
        mp[arrBColor[i]].insert(arrB[i]);
        isb[arrBColor[i]]=1;
    }
    ll curr=-1;
    for(ll i=0;i<n;i++) {
        if(!isb[arrAColor[i]]) {
            if(arrA[i]<curr) {
                cout<<"No"<<endl;
                return;
            }
            curr=arrA[i];
            continue;
        }
        // return lowest num greater or equal to curr
        auto it = mp[arrAColor[i]].lower_bound(curr);
        if(it==mp[arrAColor[i]].end()) {
            cout<<"No"<<endl;
            return;
        }
        curr=*it;
        mp[arrAColor[i]].erase(it);
    }
    cout<<"Yes"<<endl;
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
