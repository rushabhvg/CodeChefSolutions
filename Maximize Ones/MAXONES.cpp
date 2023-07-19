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
        int N;
        cin>>N;
        string S;
        cin>>S;
        bool b = S.find("00") != string::npos || S.find("111") != string::npos || S.find("010") != string::npos;
	    auto Z = S.substr(1, N - 2);
	    bool c = S.find("1") != string::npos;
	    bool k = Z.find("0") != string::npos;
	    if (c && b)  {
	        fill(S.begin() + 1, S.end() - 1, '1');
    	    if (k) {
    			if (S[0] == '1' && S[N - 1] == '1') S[1]='0';
    	    }
	    }
	    cout << S << endl;
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
