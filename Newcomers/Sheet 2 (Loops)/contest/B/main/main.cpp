#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (i == j&&i!=x/2&&j!=x/2)
			{
				cout<<"\\";
			}
			else if (i == x / 2 && j == x / 2)
			{
				cout << "X";
			}
			 else if (j != x / 2&&i==((x-1)-j))
			{
				cout<<"/";
			}
			 else
			{
				cout<<"*";
			}
		}
		cout << endl;
	}
}
