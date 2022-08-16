#include<iostream>
using namespace std;

int main() {
	int i = 0, x , n;
    cin >> x;
    cin >> n;
    if (n == 0 && x == 0){
        cout << 1;
    }else if(n ==  0){
        cout << 1;
    }else if (x == 0){
        cout << 0;
    }else{
        while (i < n){
        	x += x;
        	i++;
        
    	}
        cout << x;
    }
}
