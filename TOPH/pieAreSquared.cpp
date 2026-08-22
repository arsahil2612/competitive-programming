#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r;
    cin >> r;
    double pi = acos(-1);
    double area = pi*r*r;
    cout << fixed << setprecision(4) << area << '\n';

    return 0;
}
