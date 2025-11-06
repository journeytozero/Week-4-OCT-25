#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin >> n >> q;

    vector<long long int> v(n+1, 0), prefix(n+1, 0);

    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    while (q--)
    {
        /* code */
        int l , r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    

    return 0;
}