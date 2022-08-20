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
    cout << (checkPalindrome(str) ? "true" : "false");
}


_____________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________
*/


int checkPalindrome(char str[]){
    int start = 0;
    int end = strlen(str) - 1;
 
    while (start < end)
    {
        // if a mismatch happens
        if (str[start] != str[end]) {
            return false;
        }
 
        start++;
        end--;
    }
 
    return true;
  
}

