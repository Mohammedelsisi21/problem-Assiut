#include<iostream>
using namespace std;
int main()
{
	long long n, a, b,  s = 0;
	cin >> n >> a >> b;
	for(int i=1;i<=n;i++)
	{
		int sum = 0;
		int n = i;
		while (n != 0)
		{
			sum += n % 10;
			n = n / 10;
		}
		if (sum >= a && sum <= b)
			s += i;
	}
	cout << s << endl;
}
