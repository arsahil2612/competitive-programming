#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> x;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        x.push_back(a);
    }

    int mx = INT_MIN;
    for(int val : x){
        mx = max(val, mx);
    }

    cout << mx << '\n';

    return 0;
}
