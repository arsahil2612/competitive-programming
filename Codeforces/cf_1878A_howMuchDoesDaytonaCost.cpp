#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool found = false;
        for(int val : a){
            if(val == k){
                found = true;
                break;
            }
        }

        if(!found){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }

    }

    return 0;
}
