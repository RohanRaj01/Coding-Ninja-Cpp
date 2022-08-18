#include<iostream>
using namespace std;

int main() {
	int n,c,i,sum=0,mul=1;
	cin >> n;
	cin >> c;
	if(c==1){
	    while(n<13 && n>0){
			sum=sum+n;
	        n--;
	    }
	    cout << sum <<endl;
	}
	else if(c==2){
	    while(n>0){
	    	mul=mul*n;
	      	n--;
        }
        cout << mul << endl;
	}
	else{
		cout << -1;
	}
	
}
