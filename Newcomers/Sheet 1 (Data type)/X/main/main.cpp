#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    if (x2 >= x1 && x2 <= y1){
        if(y2 >= y1)
            cout<<x2<<" "<<y1<<endl;
        else
            cout<<x2<<" "<<y2<<endl;
    }else if(x1 >= x2 && x1 <= y2){
        if(y2 >= y1)
            cout<<x1<<" "<<y1<<endl;
        else
            cout<<x1<<" "<<y2<<endl;
    }else
        cout<<-1<<endl;
    return 0;
}
