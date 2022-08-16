#include<iostream>
using namespace std;


int main(){
	int N, i = 0;
    cin >> N;
    while (i < N){
        int j = 0;
        while (j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

