#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int mx = a[0];
        int dx = 0;
        for(int i = 0; i < n-1; i++){
            dx = a[i+1] - a[i];
            mx = max(dx, mx);
        }
        if(mx < ((x-a[n-1])*2)){
            cout << ((x-a[n-1])*2) << '\n';
        }
        else{
            cout << mx << '\n';
        }
    }

    return 0;
}
