#include<iostream>
using namespace std;


int main(){
    int N, i = 1;
    cin >> N;
    while(i <= N){
        int spaces = 1;
        while(spaces <= N - i){
            cout << " ";
            spaces++;
        }
        int nums = 1;
        while (nums <= i){
            cout << nums;
            nums++;
        }
        cout << endl;
        i++;
    }
}
