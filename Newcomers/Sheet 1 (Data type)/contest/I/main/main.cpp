/*#include <iostream>

using namespace std;

int main()
{
    int a, one, two;
    cin>>a;
    one = a % 10;
    two = a / 10;
    if(one % two == 0 || two % one == 0 || a % 10 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin>>a>>b;
    if(a > b)
        cout<<"Omar"<<endl;
    else if(a < b)
        cout<<"Anas"<<endl;
    else
        cout<<"Tie"<<endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    long long a, b, c;
    cin>>a>>b>>c;
    double res = a + b;
    if(res >= c)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    long long x;
    cin >> x;
    long long x = x * (x - 1)/2 ;
    cout << x<<endl;
}
*/
#include <iostream>
	using namespace std;
	int main()
	{
		long long n;
		cin >> n;
		long long x = n * (n - 1)/2 ;
		cout << x<<endl;
	}
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if (c < a || c > a + b)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Yes" << endl;
}
*/

#include <iostream>
using namespace std;
int main() {
    char c;
    int r;
    cin>>c>>r;
    int c_num = c - 'a' + 1;
    int countt = 0;
    if (r + 2 <= 8 && c_num + 1 <= 8) countt++;
    if (r + 2 <= 8 && c_num - 1 >= 1) countt++;
    if (r - 2 >= 1 && c_num + 1 <= 8) countt++;
    if (r - 2 >= 1 && c_num - 1 >= 1) countt++;
    if (r + 1 <= 8 && c_num + 2 <= 8) countt++;
    if (r + 1 <= 8 && c_num - 2 >= 1) countt++;
    if (r - 1 >= 1 && c_num + 2 <= 8) countt++;
    if (r - 1 >= 1 && c_num - 2 >= 1) countt++;
    cout << countt << endl;
    return 0;
}
