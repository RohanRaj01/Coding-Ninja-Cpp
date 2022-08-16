#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, remainder, even_sum = 0, odd_sum = 0;
    cin >> N;
    int size = (log(N)/log(10)) + 1;
    int i = 0;
    while(i < size){
        remainder = N % 10;
        if (remainder % 2 == 0){
            even_sum += remainder;
        }else{
            odd_sum += remainder;
        }
        N /= 10;
        i++;
    }
    cout << even_sum << " ";
    cout << odd_sum ;
    
}
