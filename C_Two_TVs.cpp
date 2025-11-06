#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;
    for (int  i = 0; i < n; i++)
    {
        /* code */
        int l , r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }

    long long int sum = 0;
    bool ok = true;

    for(auto [key, value] : mp)
    {
        sum += value;

        if(sum > 2)
        {
            ok = false;
            break;
        }
    }
    
    if(ok){
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}