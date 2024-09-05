#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, result;
    cin>>x>>y;
    result =x / y;
    cout<<"floor " <<x<<" / "<<y<<" = "<<floor(result)<<endl;
    cout<<"ceil " <<x<<" / "<<y<<" = "<<ceil(result)<<endl;
    cout<<"round " <<x<<" / "<<y<<" = "<<round(result)<<endl;
    return 0;
}
