
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int total = 0;
    for(int i = 1; i < N; i++){
        if(N % i == 0){
            total++;
        }
    }
    cout << total << '\n';

}
