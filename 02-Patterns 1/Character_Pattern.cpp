#include<iostream>
using namespace std;


int main(){
	int N, i = 1;
    cin >> N;    
    while (i <= N){
    	char ch = 'A' + i - 1;
        int j = 1;
        while (j <= i){
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}
