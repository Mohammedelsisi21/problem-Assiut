#include <iostream>

using namespace std;

int main()
{
    int x, y , z, maax, minn, avrg;
    cin>>x>>y>>z;
    if(x >= y && x >= z){
        if(y >= z){
            maax = x;
            avrg = y;
            minn = z;
        }
        else{
            maax = x;
            avrg = z;
            minn = y;
        }
    }else if (y >= x && y >= z){
        if(x >= z){
            maax = y;
            avrg = x;
            minn = z;
        }
        else{
            maax = y;
            avrg = z;
            minn = x;
        }
    }else {
        if(x >= y){
            maax = z;
            avrg = x;
            minn = y;
        }
        else{
            maax = z;
            avrg = y;
            minn = x;
        }
    }

    cout<<minn<<endl<<avrg<<endl<<maax<<endl<<endl;
    cout<<x<<endl<<y<<endl<<z<<endl;

    return 0;
}
