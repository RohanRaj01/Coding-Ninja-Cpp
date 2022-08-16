#include<iostream>
using namespace std;


int main(){
	int N, i = 1;
    cin >> N;
    while (i <= N){
        int j = 1;
        while (j <= i){
            char ch = 'A' + i - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}
