#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;
    if((y % 4 == 0 && y % 100 != 0))
    {
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }

    return 0;
}
