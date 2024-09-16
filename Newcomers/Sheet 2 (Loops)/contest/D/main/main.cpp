#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long x;
    cin >> x;

    while (x--) {
        long long a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        long long sumR = (b * (b + 1)) / 2;
        long long sumL = ((a - 1) * a) / 2;
        cout <<abs(sumR - sumL)<<endl;
    }

    return 0;
}
