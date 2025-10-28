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
        int n;
        cin >> n;
        vector<long long int> a(n),v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<long long int> dp(n);
        long long int mxsve = 0;

        for(int i = 0; i < n; i++)
        {
            dp[i] = v[i];

            for(int j = 0; j < i; j++)
            {
                if(a[j] <= a[i])
                {

                    dp[i] = max(dp[i], dp[j] + v[i]);
                }
            }
            mxsve = max(mxsve, dp[i]);
        }
        long long tcost = accumulate(v.begin(),v.end(), 0LL);
        cout << tcost - mxsve << endl;

    }
    

    return 0;
}

// Question: https://codeforces.com/contest/2167/problem/G
