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

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if(
            ( (a==a1) and (b==b1) ) or
            ( (a==b1) and (b==a1) )
        ) cout<<1;
        else if(
            ( (a==a2) and (b==b2) ) or
            ( (a==b2) and (b==a2) )
        ) cout<<2;
        else cout<<0;
        cout<<endl;
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
