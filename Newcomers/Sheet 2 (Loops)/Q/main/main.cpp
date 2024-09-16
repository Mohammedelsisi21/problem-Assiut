#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i = 1; i <= x ; i++) {
        string num;
        cin>>num;
        int len = num.length();
        for (int j = len-1; j >= 0 ; j--){
            cout<<num[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
