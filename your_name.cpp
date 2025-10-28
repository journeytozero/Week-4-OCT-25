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
        string s, t;
        cin >> s >> t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s == t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    

    return 0;
}

// Question: https://codeforces.com/contest/2167/problem/B
