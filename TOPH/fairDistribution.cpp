#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin >> x >> y;
    int div = y / x;
    y = (x*(div+1)) - y;
    cout << y << '\n';


    return 0;
}
