/*

// main code

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}


__________________________________________________________________________________________________________________________________________________________________
__________________________________________________________________________________________________________________________________________________________________
*/


void removeAllOccurrencesOfChar(char input[], char c) {
    
    int j, n = strlen(input); 
    for (int i=j=0; i<n; i++){
       if (input[i] != c){
          input[j] = input[i];
           j++;
       }
    }
    input[j] = '\0';
    
}

