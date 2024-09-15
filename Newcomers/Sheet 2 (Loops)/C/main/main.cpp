#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int num;
    int even = 0 , odd = 0, po = 0 , ne = 0;
    for(int i = 1; i <= x; i++){
        cin>>num;
        if(num % 2 == 0)
            even++;
        if(num % 2 != 0)
            odd++;
        if(num > 0)
            po++;
        if(num < 0)
            ne++;
    }
    cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<po<<"\nNegative: "<<ne<<endl;
    return 0;
}
