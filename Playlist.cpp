#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> play(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> play[i];
    }
    
    unordered_map<int, int> last_seen;
    last_seen.reserve(2*n);
    last_seen.max_load_factor(0.7);
    
    int left = 0, max_len = 0;

    for(int right = 0; right < n; right++)
    {
        int song = play[right];

        if(last_seen.count(song))
        {
            left = max(left, last_seen[song] + 1);
        }

        last_seen[song] = right;

        max_len = max(max_len, right - left + 1);
    }

    cout << max_len << endl;
    return 0;
}