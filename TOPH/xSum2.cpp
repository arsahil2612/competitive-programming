
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
    int midIdx = n/2;
    if(n & 1)
    {
        int i = 0, j = 0;
        while(i < n){
            sum += arr[i++][j++];

        }
        i = 0, j = n-1;
        while(j >= 0){
            sum += arr[i++][j--];
        }
        sum -= arr[midIdx][midIdx];
        cout << sum << '\n';
    }
    else{
        int i = 0, j = 0;
        while(i < n){
            sum += arr[i++][j++];

        }
        i = 0, j = n-1;
        while(j >= 0){
            sum += arr[i++][j--];
        }
        cout << sum << '\n';
    }

    return 0;
}
