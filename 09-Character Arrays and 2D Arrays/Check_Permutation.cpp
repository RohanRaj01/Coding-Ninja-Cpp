/*

// main code

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}


_____________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________
*/


#include <bits/stdc++.h>
bool isPermutation(char input1[], char input2[]) {
        
    string str1 = input1; // converting into string
    string str2 = input2;
    
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same,
    // then they cannot be Permutation
    if (n1 != n2)
      return false;
 
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;
 
    return true;
    
}
