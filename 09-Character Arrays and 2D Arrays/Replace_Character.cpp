/*

// main code

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}

// not me
__________________________________________________________________________________________________________________________________________________________________
__________________________________________________________________________________________________________________________________________________________________
*/


void replaceCharacter(char input[], char c1, char c2) {
    
    int l = strlen(input);
     
    if(input[0] == '\0'){
        return;
    }
    if(input[0] != c1){
        replaceCharacter(input + 1, c1, c2);
    }
    else{
        input[0] = c2;
        replaceCharacter(input + 1, c1, c2);
    }
    
}
