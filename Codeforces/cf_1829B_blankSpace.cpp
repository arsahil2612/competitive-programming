#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int zero = 0, mxZero = 0;
        for(int x : a)
        {
            if(x == 0)
            {
                zero++;
                mxZero = max(zero, mxZero);
            }
            else
            {
                zero = 0;
            }
        }
        cout << mxZero << '\n';
    }


    return 0;
}
