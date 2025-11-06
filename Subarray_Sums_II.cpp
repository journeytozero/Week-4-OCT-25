#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int x;
    cin >> n >> x;

    vector<long long int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<long long int , long long int> count;
    count[0] = 1;

    long long int prefix = 0, ans = 0;

    for (int  i = 0; i < n; i++)
    {
        /* code */
        prefix += v[i];
        ans += count[prefix - x];
        count[prefix]++;
    }

    cout << ans << endl;
    

    return 0;
}