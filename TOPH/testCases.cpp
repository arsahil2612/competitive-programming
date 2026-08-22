#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cpuL, memL;
    cin >> n >> cpuL >> memL;
    string status = "";
    while(n--)
    {
        int diff, cpuI, memI;

        cin >> diff >> cpuI >> memI;
        if(cpuI > cpuL)
        {
            status = "CLE";
        }
        else if(memI > memL)
        {
            if(status != "CLE")
            {
                status = "MLE";
            }

        }
        else if(diff != 0)
        {
            if(status != "CLE" && status != "MLE")
            {
                status = "WA";
            }
        }
        else
        {
            status = "AC";
        }


    }
    cout << status << '\n';

    return 0;
}
