#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long num, numi,sum = 0;
    cin>> num;
    for(int i=0; i<num; i++){
        cin>> numi;
        sum += numi;
    }
    cout<<abs(sum)<<endl;
    return 0;
}
