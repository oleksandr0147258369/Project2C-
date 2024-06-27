#include<iostream>
#include<string.h>

using namespace std;

bool func(char* str)
{
	int size = strlen(str);
	int n = 0;

	for (int i = 0; i < size; i++)
	{
		if (n < 0) return false;
		if (str[i] == '(') n++;
		else if (str[i] == ')') n--;
	}
	if (n == 0) return true;
	return false;
}

int main()
{
	char str[80];
	cin.getline(str, 80);

	cout << func(str);

	return 0;
}