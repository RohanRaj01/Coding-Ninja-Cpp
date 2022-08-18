#include<iostream>
using namespace std;

void Count(string str)
{
	int characters = 0, number = 0, white_spaces = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			characters++;
        
		if (str[i]>= '0' && str[i]<= '9')
			number++;
        
		if(str[i] == ' ' || str[i] == '\n')
			white_spaces++;
        if (str[i] == '$')
            break;
        
	}
	cout << characters << ' ';
	cout << number << ' ';
	cout << white_spaces << endl;
}

int main()
{
	string str;
    getline (cin, str, '$');
	Count(str);
	return 0;
}
