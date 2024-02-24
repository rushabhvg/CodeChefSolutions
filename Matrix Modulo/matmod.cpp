/*
BY>>m RUSHABH GALA
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

#define MOD 1000000007
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define sz(x)((int)(x).size())
#define all(x)(x).begin(), (x).end()
#define int long long

const int N = 1e6;
vector < int > pow2(N), factorial(N);

int sum = 0;

void solve() {
    int n;
    cin >> n;

    sum += n * n;

    int k = n * (n + 1) / 2;
    set<int> diagonal, nonDiagonal;
    for (int i = 1; i <= n * n; i++)
        nonDiagonal.insert(i);

    for (int i = (n * (n - 1) / 2) + 1; i <= k; i++) {
        diagonal.insert(i);
        nonDiagonal.erase(i);
    }

    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 0) continue;

            if (i == j) {
                if (diagonal.count(mat[i][j]) == 0) {
                    cout << 0 << endl;
                    return;
                } else
                    diagonal.erase(mat[i][j]);
            }

            cnt[mat[i][j]]++;
        }
    }

    bool flag = 1;
    int pairs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int a = mat[i][j], b = mat[j][i];

            if (a and(nonDiagonal.count(a) == 0))
                flag = 0;

            if (b and(nonDiagonal.count(b) == 0))
                flag = 0;

            if (a and b) {
                if ((a % k) != (b % k))
                    flag = 0;
            } else if (a) {
                if (a <= n * (n - 1) / 2) {
                    if (cnt[a + k])
                        flag = 0;
                } else {
                    if (cnt[a - k])
                        flag = 0;
                }
            } else if (b) {
                if (b <= n * (n - 1) / 2) {
                    if (cnt[b + k])
                        flag = 0;
                } else {
                    if (cnt[b - k])
                        flag = 0;
                }
            } else {
                pairs++;
            }
        }
    }

    if (!flag) {
        cout << 0 << endl;
        return;
    }

    int ans = (factorial[pairs] * pow2[pairs]) % MOD;
    ans *= factorial[sz(diagonal)];
    ans %= MOD;

    cout << ans << endl;
}

signed main() {
    pow2[0] = factorial[0] = 1;
    for (int i = 1; i < N; i++) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
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
