#include <iostream>

using namespace std;

int main()
{
    int x, num;
    cin>>x;
    for (int i = 1; i <= x; i++){
        long long fact = 1;
        cin>>num;
        for (int j = 1 ; j <= num; j++){
            fact *=j;
        }
        cout<<fact<<endl;
    }
    return 0;
}
