#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    int mn = INT_MAX;
    for(int val : a){
        if(val == 0){
            cout << "0\n";
            return 0;
        }
        else{
            mn = min(abs(val), mn);
        }
    }

    cout << mn << '\n';
    return 0;
}
