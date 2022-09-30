#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n, numEle=0, maxElem=0;
        cin>>n;
        ll arr[n+1]={0};
        map<ll, ll> freq;
        ll x;
        for(ll i=0; i<n; i++) {
            cin>>x;
            freq[x]+=1;
        }
        for(auto it:freq) {
            if(it.second>maxElem) {
                maxElem=it.second;
            }
        }
        cout<< n - maxElem;
        cout<<endl;
    }
	return 0;
}
