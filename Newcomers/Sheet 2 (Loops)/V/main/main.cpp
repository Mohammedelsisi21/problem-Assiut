#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int j = 0;
	int i = 1;
	while (1)
	{
		if (j == n)
			break;
		if (i % 4 == 0)
		{
			cout << "PUM" << endl;
			i++;
			j++;
			continue;
		}
		cout << i << " ";
		i++;
	}
}
