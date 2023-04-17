#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x,police=0,crime=0;
    while(n--)
    {
        cin >> x;
        if(x>0)
        {
            police+=x;
        }
        else
        {
            if(police<0)
            {
                ++crime;
            }
            else
            {
                --police;
            }
        }
    }
    cout << crime;
}
