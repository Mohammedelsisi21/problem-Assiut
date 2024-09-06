#include <iostream>

using namespace std;

int main()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    x %=100;
    y %=100;
    a %=100;
    b %=100;
    long long mul = x* y* a* b;
    mul %= 100;
    if(mul > 10){
        cout<< mul<<endl;
    }else
    cout<<0<<mul;
    return 0;
}
