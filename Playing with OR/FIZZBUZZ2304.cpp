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
    long long int n, k, cnt=0, curr=0;
    cin >> n >> k;
    vector<long long> arr(n, 0), arr2(n,0);
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]%2==1) arr2[i] = 1;
    }
    
    for(int i=0; i<k; i++) {
        curr += arr2[i];
    }
    
    if(curr>0) cnt++;
    // cout<<"CURR: " <<curr<<endl;
    
    for(int i=k; i<n; i++) {
        curr = curr + arr2[i] - arr2[i-k];
        if(curr>0) cnt++;
        // cout<<"CURR: " <<curr<<endl;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long  long  t = 0;cin>>t;
    while (t--){
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
