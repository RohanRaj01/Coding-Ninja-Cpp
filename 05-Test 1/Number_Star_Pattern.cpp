#include<iostream>
using namespace std;


int main()
{
    int num;
    cin >> num;
    int l = num;
    for(int i = 1; i <= num; i++)
    {
        for(int j = num; j >= i; j--)
        {
            cout << num-j+1;
        }
        if(i > 1)
        {
        for(int p = 1;p <= 2*(i-1); p++)
        {
            cout << "*";
        }
        }
        for(int j = l; j >= 1; j--)
        {
            cout << j;
            
        }
        l = l - 1;
        cout << endl;
    }
}
