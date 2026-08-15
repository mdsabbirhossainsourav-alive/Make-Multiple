#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%3 == 0)
        {
            cout << 0 << endl;
        }
        else if(n%3 == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            int tp = n+1;
            while(tp%5 != 0)
            {
                tp++;
            }
            if(tp%3 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }  
        }
    }
    return 0;
}