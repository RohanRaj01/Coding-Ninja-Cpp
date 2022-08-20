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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}


____________________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________________
*/


void pushZeroesEnd(int *input, int size){
    // 'i' use to check and 'a' to store value in the array
    int a = 0;
 
    for (int i = 0; i < size; i++){
        if (input[i] != 0) {
            input[a] = input[i];
            a++;
        }
    }
 
    for (int i = a; i < size; i++) {
        input[i] = 0;
    }

}
