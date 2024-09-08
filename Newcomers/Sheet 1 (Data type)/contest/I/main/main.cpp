#include <iostream>

using namespace std;

int main()
{
    int a, one, two;
    cin>>a;
    one = a % 10;
    two = a / 10;
    if(one % two == 0 || two % one == 0 || a % 10 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
