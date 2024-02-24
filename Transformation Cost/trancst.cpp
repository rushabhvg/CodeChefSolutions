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
#define vll std::vector<long long int>
#define int long long int
#define double long double

const int MOD = 1000000007;

string ConvertToBinary(int num) {
    vector<int> bin;
    string op;
    while (num >  0) {
        bin.push_back(num %  2);
        num /=  2;
    }
    std::reverse(bin.begin(), bin.end());
    for (int bit : bin) {
        op += std::to_string(bit);
    }
    return op;
}

bool chkSS(string str) {
    for(int i=0; i<str.size()-1; i++) {
        // cout<<"\n:"<<str[i];
        if(str[i] == '1') {
            // cout<<"\n\tGOT 1: "<<i<<" && CHK ..0..1: "<<i+1;
            int j = i;
            while(j++<str.size()) {
                if(str[j]=='0') {
                    // cout<<"\n\t\tGOT 0:"<<j<<" && CHK..1..: " << j+1;
                    int k = j;
                    while(k++<str.size()) {
                        if(str[k]=='1') {
                            // cout<<"\n\t\t\tGOT..1..: " << k;
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

void solve() {
    int n;
    int cost = 0;
    cin>>n;
    if(n==0) {
        cout<<"0"<<endl;
        return;
    }
    int lsb1 = 0;
    string str = ConvertToBinary(n);
    // cout<<"\n"<<str<<": ";
    // cout<<"\nRETURNED FROM BIN\n";
    
    int m = str.size()-1;
    
    bool needed = chkSS(str);
    // cout<<"\nRETURNED FROM CHKSS\n";
    
    if(!needed) {
        cout<<"0\n";
        return;
    }
    
    
    // cout<<"\nRETURNED FROM NEEDED\n";
    
    // ??? TO CALC
    vector<int> powTable = {1, 2};
    for(int i=3; i<=30; i++) {
        powTable.push_back(powTable.back()*2);
    }
    int ei = m;
    // cout<<"\nPOW TABLE!!!!!!!\n";
    
    // base case for 0s and 1s
    while(ei>0 && str[ei]=='0')
        ei--;
    
    int si = 0;
    while(si<m && str[si]=='1') si++;
    
    cost += powTable[m-ei];
    
    // cout<<"\n"<<si<<" "<<ei<<" "<<cost<<":\n";
    
    while(ei>si+1) {
        while(ei>si && str[ei]=='1') {
            ei--;
        }
        // cout<<"\nei: "<<ei;
        while(ei>si && str[ei]=='0') {
            // cout<<"\nei: "<<ei<<" cost: "<<cost;
            cost += powTable[m-ei];
            // cout<<" => "<<cost;
            ei--;
        }
        // cout<<"\nei: "<<ei;
        // ei--;
    }
    cout<<cost<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin>>t;
    while (t--) {
        solve();
    }
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
