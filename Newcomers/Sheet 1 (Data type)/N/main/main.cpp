#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if(x >= 97 && x <= 122){
        x -= 32;
    }else if (x>= 65&& x <= 90){
        x +=32;
    }
    cout<<x<<endl;
    return 0;
}
