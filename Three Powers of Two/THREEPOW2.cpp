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

#define ll long long

using namespace std;
int main() {
    ll t;
    bool ans=false;
    cin>>t;
    while(t--) {
        ll n;
        string str;
        ll c1=0;
        cin>>n;
        cin>>str;
        for(char c : str) {
            if(c=='1') c1++;
        }
        if(c1>3) {
            ans=false;
        } else {
            if(c1 == 2 || c1 == 3) ans = true;
            else {
                if(n>=3) ans = true;
                else ans = false;
            }
        }
        if(ans) cout<<"YES";
        else cout<<"NO";
        cout << endl;
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
