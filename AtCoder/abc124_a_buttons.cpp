#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b, mx = INT_MIN;
    cin >> a >> b;

    int sum = 0;
    for(int i = 0; i < 2; i++){
        mx = max(a,b);
        sum += mx;
        if(a >= b){
            a--;
        }
        else{
            b--;
        }
    }

    cout << sum << '\n';


    return 0;
}
