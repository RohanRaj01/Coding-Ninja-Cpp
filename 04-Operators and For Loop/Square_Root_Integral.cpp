#include <bits/stdc++.h>
using namespace std;
int countSquares(int x)
{
    int sqr = sqrt(x);
    int result = (int)(sqr);
    return result;
}
int main()
{
 
    int x;
    cin >> x;
    cout << (countSquares(x));
 
    return 0;
}
