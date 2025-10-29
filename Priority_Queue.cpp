#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, test;
    cin >> n >> test;

    vector<priority_queue<int>> pq(n);

    while (test--)
    {
        /* code */
        int typ,t;
        cin >> typ >> t;

        if(typ == 0)
        {
            int x;
            cin >> x;
            pq[t].push(x);
        }
        else if(typ == 1)
        {
            if(!pq[t].empty())
            {
                cout << pq[t].top() << "\n";
            }
        }
        else if(typ == 2)
        {
            if(!pq[t].empty())
            {
                pq[t].pop();
            }
        }
    }
    

    return 0;
}