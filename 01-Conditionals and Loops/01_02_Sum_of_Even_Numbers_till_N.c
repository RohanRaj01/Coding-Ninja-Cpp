#include<iostream>
using namespace std;


int main(){
    int N , ans = 0, i = 1;
    cin >> N ;
    while(i <= N){
        if (i % 2 == 0){
            ans += i;
        }
        i = i + 1;
    }
    cout << ans;
    return 0;
}
