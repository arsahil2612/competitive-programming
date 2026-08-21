#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,T;
    cin >> A >> B >> T;

    double afterActivation = T + 0.5;
    int numberOfTotalBiscuits = 0;
    if(afterActivation > A){
        while(afterActivation > A){
            numberOfTotalBiscuits += B;
            afterActivation -= A;
        }
        cout << numberOfTotalBiscuits << '\n';
    }
    else{
        cout << "0\n";
    }

    return  0;
}
