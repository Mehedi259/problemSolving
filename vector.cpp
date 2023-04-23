// Mehedi Hasan Mridul
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> f(1e5+1);
    vector<int> pf(1e5+1);
    for(int i=1;i<n;i++)
    {
        cin >> v[i];
        f[v[i]]++;

    }
    pf[0] = 0;
    for(int i=1;i<=1e5;i++)
    {
        pf[i]=pf[i-1]+f[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        if(x>1e5)
        {
            cout << n << endl;
        }
        else
        {
            cout << pf[x] << endl;
        }
    }

}
