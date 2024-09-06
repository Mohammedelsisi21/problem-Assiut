#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char opr;
    cin>>x>>opr>>y;
    if(opr == '>'){
        if( x > y)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
    if(opr == '<'){
        if( x < y)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
    if(opr == '='){
        if( x == y)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
    return 0;
}
