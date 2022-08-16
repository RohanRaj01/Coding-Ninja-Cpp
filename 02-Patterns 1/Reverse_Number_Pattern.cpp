#include<iostream>
using namespace std;


int main(){
	int N, i = 1;
    cin >> N;
    while (i <= N){
        int j = i;
        while (j > 0){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}
