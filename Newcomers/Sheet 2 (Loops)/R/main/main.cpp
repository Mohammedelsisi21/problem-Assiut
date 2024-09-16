#include<iostream>
using namespace std;
int main()
{
	int x, y, max, min;
	while (true)
	{
		cin >> x >> y;
		if (x <= 0 || y <= 0)
			break;
		if (x > y)
		{
			max = x;
			min = y;
		}
		else {
			max = y;
			min = x;
		}
		int sum = 0;
		for (int i = min; i <= max;i++)
		{
			cout << i << " ";
			sum = sum + i;
		}
		cout << "sum =" << sum << endl;
	}
}
