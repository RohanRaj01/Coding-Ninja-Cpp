/*

// main code

#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}


_________________________________________________________________________________________________________________________________________________________________
_________________________________________________________________________________________________________________________________________________________________
*/


void rotate(int *input, int d, int n){
    
    int temp[d];
	for (int i = 0; i < d; i++){
    	temp[i] = input[i];
    }
      
    int x = 0;
  	for(int j = d; j < n; j++){
    	input[x] = input[j];
    	x++;
  	}
  
  	x = 0;
  	for (int k = n - d; k < n; k++){
    	input[k] = temp[x];
    	x++;
  	}
    
}
