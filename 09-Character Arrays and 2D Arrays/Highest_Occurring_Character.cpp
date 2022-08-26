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
    cout << highestOccurringChar(str);
}


__________________________________________________________________________________________________________________________________________________________________
__________________________________________________________________________________________________________________________________________________________________
*/


char highestOccurringChar(char input[]) {
    
    char result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	len = strlen(input);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[input[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[input[i]])
		{
			max = freq[input[i]];
			result = input[i];
		}
	}
  	return result;
    
}
