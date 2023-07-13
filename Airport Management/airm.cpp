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

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        std::cin>>n;
        vector<ll> runway(1440);
        for(ll i=0; i<n; i++) {
            ll temp;
            std::cin>>temp;
            runway[temp]++;
        }
        for(ll i=0; i<n; i++) {
            ll temp;
            std::cin>>temp;
            runway[temp]++;
        }
        cout << *max_element(runway.begin(), runway.end()) <<endl;
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
