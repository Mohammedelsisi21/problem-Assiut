#include <iostream>

using namespace std;

int main()
{
    long long x, y, res, s;
    char opr, ass;
    cin>>x>>opr>>y>>ass>>res;
    if (opr == '+'){
        s = x + y;
        if(s == res)
            cout<<"Yes"<<endl;
        else
            cout<<s<<endl;
    }
    if (opr == '-'){
        s = x - y;
        if(s == res)
            cout<<"Yes"<<endl;
        else
            cout<<s<<endl;
    }
    if (opr == '*'){
        s = x * y;
        if(s == res)
            cout<<"Yes"<<endl;
        else
            cout<<s<<endl;
    }

    return 0;
}
