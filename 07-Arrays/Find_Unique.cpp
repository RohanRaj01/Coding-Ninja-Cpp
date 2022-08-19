/*

// main code

#include <iostream>
#include "solution.h"
using namespace std;

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

		cout << findUnique(input, size) << endl;
	}

	return 0;
}


______________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________
*/


int findUnique(int *arr, int size)
{
	int ans = 0;
    for(int i = 0; i < size; i++ ){
        ans= ans^arr[i];
    }
    
    return ans;
    
}
