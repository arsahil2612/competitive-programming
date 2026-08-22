#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;

    if(n & 1)
    {
        int midIdx = n/2;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    sum += arr[i][j];
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i+j == n-1){
                    sum += arr[i][j];
                }
            }
        }
        sum -= arr[midIdx][midIdx];
        cout << sum << '\n';
    }
    else{
                for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    sum += arr[i][j];
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i+j == n-1){
                    sum += arr[i][j];
                }
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
