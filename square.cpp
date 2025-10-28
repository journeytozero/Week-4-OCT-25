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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == b && b== c && c == d)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    

    return 0;
}

// Question: https://codeforces.com/contest/2167/problem/A
