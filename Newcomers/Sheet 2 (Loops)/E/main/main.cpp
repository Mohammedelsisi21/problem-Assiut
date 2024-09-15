#include <iostream>

using namespace std;

int main()
{
    long long x, maximum = 0, num;
    cin>>x;
    for(int i = 1; i <= x; i++){
        cin>>num;
        if(num >= maximum)
            maximum = num;
    }
    cout<<maximum<<endl;
    return 0;
}
