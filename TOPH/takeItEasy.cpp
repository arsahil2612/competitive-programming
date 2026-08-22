#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, c, d;
    cin >> n;

    for(int i = 1; i <= n; i++){
        a += i;
    }

    b = pow(n,n);

    c = 1;
    for(int i = 1; i <= n; i++){
        c *= i;
    }

    d = (pow(2, n) + pow(3. n));

    if((b > 10000000))

    cout << a << b << c << d << '\n';

    return 0;
}
