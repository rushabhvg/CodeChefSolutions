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

int change_mod(int curr, int req) {
    int m1 = curr % 3;
    int m2 = req % 3;
    if (m1 == m2)
        return 0;
    if (m1 < m2)
        return m2 - m1;
    return m2 + (3 - m1);
}

int solver(vector<int> a) {
    int ans = 0;
    for (int i = 3; i < a.size(); i++) {
        ans += change_mod(a[i], a[i - 3]);
        a[i] = a[i - 3];
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        std::vector<int> a;
        for(int i=0; i<n; i++) {
            int temp;
            cin>>temp;
            a.push_back(temp%3);
        }
        
        vector<vector<int>> X;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if ((i + j + k) % 3 == 0) {
                        X.push_back({i, j, k});
                    }
                }
            }
        }
        
        int ans = 1e9;
        
        for (auto vec : X) {
            vector<int> temp = vec;
            for (auto x : a) {
                temp.push_back(x);
            }
            ans = min(ans, solver(temp));
        }
        cout << ans << endl;
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
