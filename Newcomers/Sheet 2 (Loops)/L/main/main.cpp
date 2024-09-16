#include <iostream>

using namespace std;

int main()
{
    int x, y,res;
    cin>>x>>y;
    for (int i=1,j=1; i<=x,j<=y ;i++,j++) {
        if(x % i == 0 && y % j == 0)
            res = i;
    }
    cout<< res;
    return 0;
}
