#include <iostream>

using namespace std;

int main()
{
    long long x, y, z, b;
    cin>>x>>y>>z>>b;
    if((x + y * z) == b)
        cout<<"YES"<<endl;
    else if((x + y - z) == b)
        cout<<"YES"<<endl;
    else if((x * y + z) == b)
        cout<<"YES"<<endl;
    else if((x * y - z) == b)
        cout<<"YES"<<endl;
    else if((x - y + z) == b)
        cout<<"YES"<<endl;
    else if((x - y * z) == b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
