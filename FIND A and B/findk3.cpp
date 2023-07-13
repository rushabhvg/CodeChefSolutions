/*
BY RUSHABH GAint x, y, z;
cin>>x>>y>>Z;
if(a==b*c && a/b==0) std::cout << b*c << std::endl;rushabhvg
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
        int x, y, z;
        cin>>x>>y>>z;
        if( (x*y)%z==0 ) std::cout << x*y << " " << z << std::endl;
        else if( (x*z)%y==0 ) std::cout << x*z << " " << y << std::endl;
        else if( (z*y)%x==0 ) std::cout << z*y << " " << x << std::endl;
        else std::cout << "-1" << std::endl;
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
