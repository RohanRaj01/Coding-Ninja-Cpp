#include<iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    int i = N;
    while (i >= 0){
        int j = N - i;
        while (j < N){
            cout << i;
            j++;        
        }
        cout << endl;
        i--;
    }
}

