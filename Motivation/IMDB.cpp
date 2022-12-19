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
        ll n, x;
        ll maxRating=0;
        ll s, r;
        ll i=0;
        
        cin>>n>>x;
        for(i=0; i<n; i++) {
            cin>>s>>r;
            if ( (r>=maxRating) && (s<=x)) {
                maxRating=r;
            }
        }
        cout<<maxRating;
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
