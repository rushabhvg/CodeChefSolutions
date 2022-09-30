#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;
        (x%25==0) ? cout<<(x/25)<<endl : cout<<(x/25)+1<<endl;
    }
	return 0;
}
