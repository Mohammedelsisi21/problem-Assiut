#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i = 2 ; i <= x; i++){
        bool pri = 0;
        for(int j = 2 ;j < i; j++) {
            if( i % j == 0)
                pri = 1;
            }
        if( pri == 0)
            cout<<i<<" ";
    }
    return 0;
}

