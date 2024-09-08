#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, k ,res = 0, test1, test2, test3;
    cin>>n>>m>>k;
    test1 = min(n, min(m, k));
    res += test1;
    n -=test1;
    m -=test1;
    k -=test1;

    test2 = min(n / 2 , min(m , k));
    res += test2;
    n -=test2;
    m -=test2;
    k -=test2;

    test3 = min(n/2 , k);
    res +=test3;

    cout<<res<<endl;
    return 0;
}
