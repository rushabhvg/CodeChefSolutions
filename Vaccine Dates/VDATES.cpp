
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
        ll d, l, r;
        cin>>d>>l>>r;
        if(d<l) cout<<"Too Early";
        else if (d>r) cout<<"Too Late";
        else cout<<"Take second dose now";
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
