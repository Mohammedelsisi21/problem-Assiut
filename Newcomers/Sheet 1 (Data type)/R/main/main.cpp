#include <iostream>

using namespace std;

int main()
{

    int days, years ,months;
    cin>>days;
    years = days / 365;
    days = days - 365 * years;
    months = days / 30;
    days = days - 30 * months;
    cout<<years<<" years\n"<<months<<" months\n"<<days<<" days"<<endl;
    return 0;
}
