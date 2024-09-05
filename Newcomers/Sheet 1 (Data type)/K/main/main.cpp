#include <iostream>

using namespace std;

int main()
{
    int x, y, z, maxx,minn;
    cin>>x>>y>>z;
    if(x >= y && x >= z) {
        if(y >= z){
            maxx = x;
            minn = z;
        }
        else{
            maxx = x;
            minn = y;
        }
    }
    else if(y >= x && y >= z) {
        if(x >= z){
            maxx = y;
            minn = z;
        }
        else{
            maxx = y;
            minn = x;
        }
    }else{
        if(x >= y){
            maxx = z;
            minn = y;
        }
        else{
            maxx = z;
            minn = x;
        }
    }
    cout <<minn<<" "<<maxx<<endl;
    return 0;
}
