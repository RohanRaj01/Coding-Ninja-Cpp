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
    printSubstrings(str);
}


______________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________
*/


#include <cstring>
void printSubstrings(char input[]) {
    
    int n = strlen(input);
	for (int len = 1; len <= n; len++){
    	for (int i = 0; i <= n - len; i++){
         	int j = i + len - 1;
         	for (int k = i; k <= j; k++)
         		cout << input[k];
         	cout << endl;
      }
   }
    
}
