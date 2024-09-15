#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    bool y = 0, z = 0;
    int len = x.length();
    for(int i = 0, j=len - 1; i < len && j >= 0; i++, j--){
        if (x[i] != x[j])
            z = 1;
        if (x[j] != '0')
            y = 1;
        if(x[j] == '0' && y ==0)
            continue;
        else
        cout<<x[j];
    }
    cout << endl;
    if(z == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
