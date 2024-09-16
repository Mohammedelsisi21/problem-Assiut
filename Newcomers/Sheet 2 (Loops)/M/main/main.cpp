#include<iostream>
using namespace std;
int main()
{
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		bool x = 0;
		int n = i;
		while (n != 0) {
			int d = n % 10;
			n = n / 10;
			if (d != 7 && d != 4)
				x = 1;
		}
		if (x == 0)
		{cout << i << " ";   sum++;}
	}
	if (sum == 0)
		cout << -1;
}
