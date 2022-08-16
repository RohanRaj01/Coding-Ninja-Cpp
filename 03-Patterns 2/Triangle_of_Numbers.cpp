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
		int j = i;
        
        while (nums <= i){
            cout << j;
            j++;
            nums++;
        }
        
        nums = i ;
        while(nums > 1){
            cout << j - 2;
            j--;
            nums--;
        }
        cout << endl;
        i++;
    }
}
