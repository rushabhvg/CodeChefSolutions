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

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, mx=0;
        cin>>n;
        vector<pair<int,int>>arr;
        for(int i=0; i<n; i++) {
            int a, b;
            cin>>a>>b;
            arr.push_back({a,i});
            arr.push_back({b,i});
            mx=max(mx,min(a,b));
        }
        sort(arr.begin(), arr.end());
        int ans =1e9;
        for(int i=0;i<2*n;i++){
            if(arr[i].first<mx) continue;
            if(i>=2&&arr[i-1].second==arr[i].second){
                ans=min(ans,arr[i].first-arr[i-2].first);
            }
            if(i>=1&&arr[i-1].second!=arr[i].second){
                ans=min(ans,arr[i].first-arr[i-1].first);
            }
      }
      cout<<ans<<endl;
    }
	return 0;
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
