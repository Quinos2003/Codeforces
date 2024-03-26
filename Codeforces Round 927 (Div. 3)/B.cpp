#include <bits/stdc++.h>
using namespace std;

void f(int n, vector<int>& arr) {
    if (n == 1) {
        cout << arr[0] << endl;
        return;
    }
    int prev = arr[0];
    int ans = arr[0];
    for (int i = 1; i < n; ++i) {
        ans = arr[i]* ((ans + arr[i])/arr[i]);
    }

    cout << ans << endl;
}

int main() {
    int ttt;
    cin >> ttt;
    while (ttt--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        f(n, arr);
    }

    return 0;
}