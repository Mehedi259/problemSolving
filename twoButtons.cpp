#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin >> n >> m;
    while(n != m)
    {
        count++;
        if(m<n || m%2 != 0)
        {
            m++;
        }
        else
        {
            m/=2;
        }
    }
    cout << count << endl;
}
