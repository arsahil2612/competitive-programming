
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    string s2 = s;
    reverse(s2.begin(), s2.end());

    if(s2 == s){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }

}
