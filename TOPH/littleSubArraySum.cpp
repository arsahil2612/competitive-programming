#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b;
    cin >> n >> a >> b;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    vector<int> subX(x.begin()+a, x.begin()+b+1);

    int subArrSum = 0;
    for(int val : subX){
        subArrSum += val;
    }

    cout << subArrSum << '\n';

}
