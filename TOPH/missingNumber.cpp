#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum;
    cin >> sum;
    vector<int> x;
    for(int i = 0; i < 3; i++){
        int a;
        cin >> a;
        x.push_back(a);
    }

    int numSum = 0;
    for(int val : x){
        numSum += val;
    }

    cout << sum - numSum << '\n';

    return 0;
}
