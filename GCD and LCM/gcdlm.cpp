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

using ll = long long;

int main() {
    ll t;
    cin>>t;
    while(t--) {
        int x, y, k;
        cin>>x>>y>>k;
        /*
        
        x = 10
        y = 15
        
        y = 5
        x = 10
        
        x = 5
        y = 5
        
        */
        if(x>y) {
            swap(x, y);
        }
        int h = __gcd(x, y);
        if(k==1) {
            cout<<h+x<<endl;
        } else {
            cout<<2*h<<endl;
        }
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
