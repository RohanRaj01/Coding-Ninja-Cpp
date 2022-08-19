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
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}


_____________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________
*/


int pairSum(int *input, int size, int x)
{
    
    int sum;
    for (int i = 0; i < size - 1; i++){
        
        for (int j = i + 1; j < size; j++){
          
            if (input[i] + input[j] == x){
                sum = sum + 1; 
                
            }
        }
    }
    return sum;
    
}
