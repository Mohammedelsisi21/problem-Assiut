#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t  ;
    cin >> t;
    while (t--)
    {
        int num ;
        cin >> num ;
        long long sum = 0 ;
        for (int i = 0 ; i<__builtin_popcount(num); i++)
        {
            sum +=pow(2,i);
        }
        cout  << sum <<endl;
    }

    return 0;
}
