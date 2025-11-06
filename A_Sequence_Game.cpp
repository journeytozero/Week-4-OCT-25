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
        vector<long long int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long int x;
    cin >> x;

    bool possible = false;

    for(int i = 0; i < n - 1; i++)
    {
        long long int m = min(v[i], v[i + 1]);
        long long int mx = max(v[i], v[i + 1]);

        if(m <= x && x <= mx)
        {
            possible = true;
            break;
        }
    }

    cout << (possible ? "YES\n": "NO\n");
    }
    

    return 0;
}