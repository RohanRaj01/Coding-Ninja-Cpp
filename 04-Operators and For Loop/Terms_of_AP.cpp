#include<iostream>
using namespace std;

int main(){
    int x,n=1,sum,i=1;
	
    cin >> x;
	  while(n<=x && n<=1000){
		  sum=(3*i)+2;
		  if(sum%4!=0){
        cout << sum << " ";
			  n=n+1;
		  }
		  i=i+1;
    }
}
