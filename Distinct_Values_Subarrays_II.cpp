#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >>k;
    vector<int> v(n);
    for(int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    long long int ans = 0;
    unordered_map<int, int> freq;

    int left = 0;

    for(int j = 0; j < n; j++)
    {
        freq[v[j]]++;
        while ((int)freq.size() > k)
        {
            /* code */
            freq[v[left]]--;
            if(freq[v[left]] == 0)
            {
                freq.erase(v[left]);
            }
            left++;
        }
        ans += (j - left + 1);
        
    }
    cout << ans <<endl;
    return 0;
}