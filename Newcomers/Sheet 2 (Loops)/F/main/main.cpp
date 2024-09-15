#include <iostream>

using namespace std;

int main()
{
    int x;
    long long mult = 1;
    cin>>x;
    for(int i = 1; i <= 12 ; i++){
        mult = x * i;
        cout<<x<<" * "<<i<<" = "<<mult<<endl;
    }
    return 0;
}
