#include <iostream>

using namespace std;

int main()
{
    long long n , m;
    cin>>n>>m;
    n %=10;
    m %=10;
    cout<< n + m <<endl;
    return 0;
}
