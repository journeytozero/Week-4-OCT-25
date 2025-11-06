#include <bits/stdc++.h>
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

        int health, np, sp;
        cin >> health >> np >> sp;

        int normal = (health + np  - 1) / np;
        int speicalCase;
        if (health <= sp)
        {
            speicalCase = 1;
        }
        else
        {
            speicalCase = 1 + (health - sp + np - 1) / np;
        }

        cout << min(speicalCase, normal) << endl;
    }

    return 0;
}