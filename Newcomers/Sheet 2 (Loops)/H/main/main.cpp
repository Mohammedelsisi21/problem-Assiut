#include <iostream>

using namespace std;

int main()
{
    int x, y = 0;
    cin>>x;
    for(int i = 2; i < x; i++){
        if(x % i == 0)
            y = 1;
    }
    if(y == 1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
