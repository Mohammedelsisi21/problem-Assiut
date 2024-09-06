#include <iostream>

using namespace std;

int main()
{

    double x;
    int num;
    cin>>x;
    num = x;
    x = x - num;
    if (x == 0)
        cout<<"int "<<num<<endl;
    else
        cout<<"float " <<num<<" "<<x<<endl;

    return 0;
}
