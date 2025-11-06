#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        /* code */
        long long n, q;
        cin >> n >> q;
        vector<long long int> a(n+1, 0), pref(n + 1, 0);
        long long int sum = 0;

        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];

            pref[i] = pref[i - 1] + a[i];
        }

        while (q--)
        {
            /* code */
            long long int l, r, k;
            cin >> l  >> r >> k;

            long long int new_sum = pref[n] -(pref[r] - pref[l - 1]) + k * (r - l + 1);

            if(new_sum % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        
    }
    

    return 0;
}