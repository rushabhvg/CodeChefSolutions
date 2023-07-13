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
        int n, m;
        cin>>n>>m;
        vector<int> arrM(m);
        for(int i=0; i<m; i++) {
            int temp;
            cin>>temp;
            arrM[i] = temp;
        }
        sort(arrM.rbegin(), arrM.rend());
        int ans = arrM[0];
        for(int i=1; i<m; i++) {
            arrM[i] = max(0, arrM[i]-(n-ans));
            ans = arrM[i];
        }
        std::cout << ans << std::endl;
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
