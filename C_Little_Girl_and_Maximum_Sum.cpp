#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , q;
    cin >> n >> q;
    vector<long long int> a(n), val(n + 1, 0), b(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() , a.end());

    for(int i = 0; i < q; i++)
    {
        int l,r;
        cin >> l >> r;
        l--, r--;
        val[l] += 1;

        if(r+1 < n)
        {
            val[r + 1] -= 1;
        }
    }

    long long int current = 0;

    for(int i = 0; i < n; i++)
    {
        current += val[i];
        b[i] = current;
    }
    sort(b.begin(), b.end());

    long long int res = 0;

    for(int i = 0; i < n; i++)
    {
        res += a[i] * b[i];
    }
    cout << res <<endl;
    return 0;
}