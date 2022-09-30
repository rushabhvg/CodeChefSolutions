#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n, oddCnt=0, evenCnt=0;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++) {
            cin>>arr[i];
            (arr[i]%2==0) ? evenCnt+=1 : oddCnt+=1;
        }
        if(oddCnt==0 or evenCnt==0) {
            cout<<0;
        } else {
            cout<<evenCnt;
        }
        cout<<endl;
    }
	return 0;
}
