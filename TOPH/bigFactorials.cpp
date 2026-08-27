#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    long long fact = 1;
    cin >> n;
    for(int i = n; i > 0; i--)
    {
        fact *= i;
        fact = fact%10000;
    }

    if(n >=8){
        cout << setfill('0') << setw(4) << fact << '\n';
    }
    else{
        cout << fact << '\n';
    }

    return 0;
}
