/*

// main code

#include <iostream>
#include <algorithm>
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
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}


________________________________________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________________________________________
*/


void sort012(int *arr, int n){
    
    int i, count0 = 0, count1 = 0, count2 = 0;
  
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            count0++;  // counting number of zero's
            break;
        case 1:
            count1++;  // counting number of one's
            break;
        case 2:
            count2++;  // counting number of two's
            break;
        }
    }
  
    i = 0;

    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }
  
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }
  
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }

}
