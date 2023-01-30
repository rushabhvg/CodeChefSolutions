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

#include <iostream>

#define ll long long

using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll a, b, c, d;
        ll arr[9]={0};
        ll cnt=0;
        cin>>a>>b>>c>>d;
        for(ll i=a; i<=b; i++) {
            arr[i]=1;
        }
        for(ll i=c; i<=d; i++) {
            arr[i]=1;
        }
        for(ll i=0; i<9; i++) {
            if(arr[i]>0) cnt++;
        }
        cout<<cnt<<endl;
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
