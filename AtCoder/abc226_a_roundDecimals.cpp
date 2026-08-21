#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a;
    cin >> a;

    if(a == 0) cout << "0\n";

    else
    {
        int n = a*10;
        if(n % 10 >= 5)
        {
            cout << ((int)a + 1) << '\n';
        }
        else
        {
            cout << int(a) << '\n';
        }

    }

    return 0;
}
