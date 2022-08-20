/*

// main code

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


____________________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________________
*/


void trimSpaces(char input[]) {
    int i = 0, j = 0;
    while (input[i])
    {
        if (input[i] != ' '){
        	input[j] = input[i];
            j++;
        }
        i++;
    }
    input[j] = '\0';
    
}
