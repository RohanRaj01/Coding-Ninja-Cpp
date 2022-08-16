#include<iostream>
using namespace std;


int main(){
	int N, i = 1;
    cin >> N;
    while (i <= N){
        int j = 1;
        while (j <= i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}
