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

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}


_____________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________
*/


void spiralPrint(int **input, int row, int col){
           
    int i, k = 0, l = 0; 
    while (k < row && l < col) { 
        for (i = l; i < col; i++) { 
            cout << input[k][i] << " "; 
        } 
        k++; 
  
        for (i = k; i < row; i++) { 
            cout << input[i][col - 1] << " "; 
        } 
        col--; 
  
        if (k < row){ 
            for (i = col - 1; i >= l; i--) { 
                cout << input[row - 1][i] << " "; 
            } 
            row--; 
        } 
  
        if (l < col){ 
            for (i = row - 1; i >= k; i--) { 
                cout << input[i][l] << " "; 
            } 
            l++; 
        } 
    }
    
}
