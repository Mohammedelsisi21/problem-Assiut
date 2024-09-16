#include <iostream>

using namespace std;

int main()
{
    char ch;
    int x, num_chra;
    cin>> ch >> x;
    for (int i = 1; i <= x ; i++){
        cin>>num_chra;
        for (int j = 1; j <= num_chra ; j++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
