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

        multiset<int> s;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            s.insert(i);
        }
        

        vector<pair<int,int>> ans;

        for(int i = 0; i < n - 1; i++)
        {
            auto it1 = prev(s.end());
            int a = *it1;
            s.erase(it1);

            auto it2 = prev(s.end());
            int b = *it2;
            s.erase(it2);

            int newVal = (a + b + 1) / 2;
            s.insert(newVal);
            ans.push_back({a,b});
        }

        cout << *s.begin() << endl;

        for(auto [a,b] : ans)
        {
            cout << a << " " << b << '\n';
        }
    }
    

    return 0;
}