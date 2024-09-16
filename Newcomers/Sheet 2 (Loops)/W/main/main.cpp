#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m = 1;
	int o = n - 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = o; j > 0; j--)
		{
			cout << " ";
		}
		o--;
		for (int g = 1; g <= m; g++)
		{
			cout << "*";
		}
		m += 2;
		cout << endl;
	}
	m -= 2;
	o = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int g = 1; g < o; g++)
		{
			cout << " ";
		}
		o++;
		for (int j = m; j > 0; j--)
		{
			cout << "*";
		}
		m -= 2;
		cout << endl;
	}
}
