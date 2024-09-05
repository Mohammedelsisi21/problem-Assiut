#include <iostream>

using namespace std;

int main()
{
    long long x, y, s;
    char opr;
    cin>>x>>opr>>y;
    if (opr == '+'){
        s = x+y;
    }
    if (opr == '-'){
        s = x-y;
    }
    if (opr == '*'){
        s = x*y;
    }
    if (opr == '/'){
        s = x/y;
    }
    cout<<s<<endl;
    return 0;
}
