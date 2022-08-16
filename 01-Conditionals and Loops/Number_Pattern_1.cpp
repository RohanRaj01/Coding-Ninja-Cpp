#include<iostream>
using namespace std;


int main()
{
    int i, j, k, N;

    cin >> N;

    for(i=1; i<=N; i++)
    {
        k = i;

        
        for(j=1; j<=i; j++, k++)
        {
           cout << k;
        }

        cout << endl;
    }
}

