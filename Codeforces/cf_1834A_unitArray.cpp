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
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0, mul = 1;
        for(int val : a)
        {
            sum += val;
        }

        int operations = 0;
        int i = 0;
        while(sum < 0)
        {
            if(a[i] == -1)
            {
                a[i] = -(a[i]);
                i++;
                sum += 2;
                operations++;
            }
            else
            {
                i++;
            }
        }
        for(int val : a)
        {
            mul *= val;
        }
        if(mul == -1)
        {
            cout << operations+1 << '\n';
        }
        else
        {
            cout << operations << '\n';
        }
    }

    return 0;
}
