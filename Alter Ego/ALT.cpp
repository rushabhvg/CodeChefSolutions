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

void solve() {
    long long n, temp;
    cin>>n;
    vector<long long> arr, arrO, arrE, arrF(n);
    
    for(long long i=0; i<n; i++) {
        cin>>temp;
        arr.push_back(temp);
        if(temp%2==1) arrO.push_back(temp);
        else arrE.push_back(temp);
    }
    
    if(arrO.size()%2==1 || arrE.size()%2==1) {
        cout<<-1<<endl;
        return;
    }
    
    sort(arrO.begin(), arrO.end());
    sort(arrE.begin(), arrE.end());
    
    for(int i=0; i<arrO.size()/2; i++) {
        int n1 = arrO[i];
        int n2 = arrO[i+(arrO.size()/2)];
        arrF[i] = ( (n1+n2) / 2 );
        arrF[i+(n/2)] = ( ( abs(n1-n2) ) / 2 );
    }
    
    for(int i=0; i<arrE.size()/2; i++) {
        int n1 = arrE[i];
        int n2 = arrE[i+(arrE.size()/2)];
        arrF[arrO.size()/2+i] = ((n1+n2)/2);
        arrF[arrO.size()/2+i+(n/2)] = ( ( abs(n1-n2) )/2 );
    }
    
    for(long long i=0; i<n; i++) {
        cout<<arrF[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0; cin>>t;
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
