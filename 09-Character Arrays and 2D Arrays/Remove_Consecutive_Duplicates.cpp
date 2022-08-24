/*

// main code

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}


____________________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________________
*/


void removeConsecutiveDuplicates(char input[]) {
    
    int nextIndex = 1;
    char lastChar = input[0];
    for(int i = 1; input[i] != '\0';) { 
        if(input[i] == lastChar) { 
            i++; 
        } 
        else {
            input[nextIndex] = input[i];
            nextIndex++; 
            lastChar = input[i];
            i++;
        }
    }
    input[nextIndex] = '\0';
    
}
