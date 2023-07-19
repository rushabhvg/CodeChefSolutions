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
        int n;
        cin>>n;
        std::vector<int> arr;
        for(int i=0; i<n; i++) {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        unordered_map<int, int> marr;
        int tot=0, maxTot=0;
        for(int i=0; i<arr.size(); i++) {
            int a = arr[i];
            if(marr[a]==0) {
                marr[a]++;
                tot++;
                maxTot = max(maxTot, tot);
            } else if(marr[a]==1) {
                marr[a]--;
                tot--;
            }
        }
        std::cout << maxTot << std::endl;
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
