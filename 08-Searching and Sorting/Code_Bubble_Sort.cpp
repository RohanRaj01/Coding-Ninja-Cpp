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

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}


___________________________________________________________________________________________________________________________________________________________________
___________________________________________________________________________________________________________________________________________________________________
*/


void bubbleSort(int *input, int size){
    for(int i = size - 1; i >= 0; i--){
        int start = 0, end = i;

        while(start < end){
            if (input[start] > input[start + 1]){
                int temp = input[start];
                input[start] = input[start + 1];
                input[start + 1] = temp;
            }
            start++;
        }
    }
}
