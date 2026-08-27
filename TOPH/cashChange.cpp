#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int fiveH = 0, oneH = 0, fifty = 0, tens = 0, fives = 0, ones = 0;
    if(N >= 500){
        fiveH = N / 500;
        N = N % 500;
    }
    if(N >= 100){
        oneH = N / 100;
        N = N % 100;
    }
    if(N >= 50){
        fifty = N / 50;
        N = N % 50;
    }
    if(N >= 10){
        tens = N / 10;
        N = N % 10;
    }
    if(N >= 5){
        fives = N / 5;
        N = N % 5;
    }
    if(N >= 1){
        ones = N / 1;
        N = N % 1;
    }

    for(int i = 0; i < ones; i++){
        cout << "1 ";
    }
    for(int i = 0; i < fives; i++){
        cout << "5 ";
    }
    for(int i = 0; i < tens; i++){
        cout << "10 ";
    }
    for(int i = 0; i < fifty; i++){
        cout << "50 ";
    }
    for(int i = 0; i < oneH; i++){
        cout << "100 ";
    }
    for(int i = 0; i < fiveH; i++){
        cout << "500 ";
    }


    return 0;
}
