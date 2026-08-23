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
        int i = 0;
        bool vanyaWin = false;
        while(i < 10){
            if(((n+1)%3 == 0) || ((n-1)%3==0)){
                cout << "First\n";
                vanyaWin = true;
                break;
            }
            else{
                i++;
            }
        }
        if(!vanyaWin){
            cout << "Second\n";
        }

    }

    return 0;
}
