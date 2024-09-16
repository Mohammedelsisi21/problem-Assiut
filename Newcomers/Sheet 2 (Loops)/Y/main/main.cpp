#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0, c = 1,f=0;
	cin >> n;
	if (n == 1)
	{
		cout << 0 << " ";
		return 0;
	}
	if (n == 2)
	{
		cout << 0 << " " << 1 << " ";
		return 0;
	}
	cout << 0 << " " << 1 << " ";
	for (int i = 3; i <= n; i++)
	{
		f = sum + c;
		cout << f<<" ";
		sum = c;
		c = f;
	}
}
