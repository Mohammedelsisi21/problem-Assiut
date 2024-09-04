#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    double pi =3.141592653;
    double r;
    cin>>r;
    double area;
    area = pi * r * r;
    cout << area <<endl;
    return 0;
}
