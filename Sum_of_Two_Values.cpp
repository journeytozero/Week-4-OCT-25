#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    long long int x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<long long int, int> mp; // Value -> idx;

    for(int i = 0; i < n; i++)
    {
        long long int need = x - v[i];

        if(mp.find(need) != mp.end())
        {
            cout << mp[need] + 1 << " "<< i+1;

            return 0;
        }

        mp[v[i]] = i;
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}