#include<iostream>
using namespace std;
int main()
{
    int i, j, rows, space; 
    
    cin>>rows; 
    space = rows - (rows/2 + 1);
    for(i=1; i<=rows - (rows/2); i++) 
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    space = 1;
    for(i=rows-(rows/2); i<=(rows-1); i++) // rows - (rows/2)  is used define rows
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(rows-i)-1); j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
