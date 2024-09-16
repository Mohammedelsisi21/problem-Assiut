#include <iostream>

using namespace std;

int main()
{
    long long x,len;
    cin>>x>>len;
    int numbers[x];
    for (int i = 0; i < x; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < x; i += len) {
        int minns = numbers[i];
        for (int j = i + 1; j < min(i + len, x); j++) {
            if (numbers[j] < minns) {
                minns = numbers[j];
            }
        }
        cout << minns << " ";
    }

}
