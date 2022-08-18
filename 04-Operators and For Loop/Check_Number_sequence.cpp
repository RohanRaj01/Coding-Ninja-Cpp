#include<iostream>
using namespace std;

int main() {
    
 	int n;
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n)
    {
    cin>>arr[i];
    i++;
    }
    int comparearray[n-1];
    for(int j=0;j<n-1;j++)
    {
     comparearray[j]=arr[j]-arr[j+1];   
    }
    int count=0;
    for(int k=0;k<n-2;k++)
    {
       if((comparearray[k]>0 && comparearray[k+1]<0)||(comparearray[k]<0 && comparearray[k+1]>0))
       {
           count++;
       }
    }
    if(count>=2)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
    
}
