#include<iostream>
using namespace std;


int main(){
    int S , E , W , celsius;
    
    cin >> S >> E >> W;
    while (S <= E){
        cout << S;
        celsius = ((S - 32) * 5 ) / 9;
        cout << " " << celsius << endl; 
        S += W;
        
    }
    return 0;
  
}
