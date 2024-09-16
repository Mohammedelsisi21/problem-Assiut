#include <iostream>

using namespace std;

int main()
{
    int x, a, b;
    cin>>x;
    for (int i =1;i <= x; i++ ){
        cin>>a>>b;
        int sum = 0;
        if(a <= b){
            for (int j = a + 1; j < b; j++ ){
                if(j % 2 != 0) {
                    sum +=j;
                }
            }
        }
        else {
        for (int m = b + 1; m < a; m++ ){
            if(m % 2 != 0) {
                sum +=m;
            }
        }
    }
        cout<<sum<<endl;
    }
    return 0;
}
