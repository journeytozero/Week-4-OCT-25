#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    set <int> s;

    while (test--)
    {
        /* code */
        int tp,x;
        cin >> tp >> x;

        if(tp == 1)
        {
            s.insert(x);
        }
        else if(tp == 2)
        {
            s.erase(x);
        }
        else if(tp == 3)
        {
            if(s.find(x) != s.end())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    

    return 0;
}