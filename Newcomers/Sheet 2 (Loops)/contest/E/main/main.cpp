#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 200000; // الحد الأقصى لعدد السكان في جميع الحالات

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long wealth[MAX_N];
        long long totalWealth = 0;

        // قراءة الثروات وحساب الثروة الإجمالية
        for (int i = 0; i < n; i++) {
            cin >> wealth[i];
            totalWealth += wealth[i];
        }

        // إيجاد أغنى شخص
        long long maxWealth = wealth[0];
        for (int i = 1; i < n; i++) {
            if (wealth[i] > maxWealth) {
                maxWealth = wealth[i];
            }
        }

        long long unhappyCount = 0;

        // حساب عدد الأشخاص غير السعداء
        for (int i = 0; i < n; i++) {
            if (wealth[i] < totalWealth / (double)n / 2) {
                unhappyCount++;
            }
        }

        if (unhappyCount <= n / 2) {
            cout << 0 << endl; // لا حاجة لمزيد من الذهب
            continue;
        }

        // البحث عن الحد الأدنى لـ x
        long long left = 0, right = 1e6 + 1, answer = -1;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long newMaxWealth = maxWealth + mid;
            long long newTotalWealth = totalWealth + mid;

            long long newUnhappyCount = 0;
            for (int i = 0; i < n; i++) {
                if (wealth[i] < newTotalWealth / (double)n / 2) {
                    newUnhappyCount++;
                }
            }

            if (newUnhappyCount <= n / 2) {
                answer = mid;
                right = mid - 1; // محاولة تقليل x
            } else {
                left = mid + 1; // زيادة x
            }
        }

        cout << answer << endl;
    }

    return 0;
}
