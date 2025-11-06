#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long prefix = 0, ans = 0;
    unordered_map<long long, int> count;
    count[0] = 1;

    for (int i = 0; i < n; ++i) {
        prefix += a[i];

        
        if (count.find(prefix - x) != count.end()) {
            ans += count[prefix - x];
        }

        count[prefix]++;
    }

    cout << ans << "\n";
    return 0;
}
