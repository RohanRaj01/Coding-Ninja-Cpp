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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}


_______________________________________________________________________________________________________________________________________________________________
_______________________________________________________________________________________________________________________________________________________________
*/


#include <limits.h>

int findSecondLargest(int *input, int n){
    
    int first_max = INT_MIN, second_max = INT_MIN;
    
    for(int i = 0; i < n; i++){
        if (input[i] > first_max){
            second_max = first_max;
            first_max = input[i];
        }else{
            if (input[i] > second_max && input[i] != first_max){
                second_max = input[i];
            }
        }
    }
    
    return second_max;
}
