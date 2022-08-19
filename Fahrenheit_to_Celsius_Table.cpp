// Main code 

#include<iostream>
using na
mespace std;
#include "Solution.h"

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}


---------------------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------------------
  
  
  void printTable(int start, int end, int step) {
    
    while(start <= end){
        int fah = ((5*(start - 32))/9);
        cout << start << " " << fah << endl;
        start += step;
    }
    
}
