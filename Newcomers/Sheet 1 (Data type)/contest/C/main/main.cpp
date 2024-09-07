#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if(x == 'z')
        x -= 25;
    else
        x += 1;
    cout<<x<<endl;
    return 0;
}
