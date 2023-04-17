#include <iostream>
using namespace std;
int main()
{
    int f,s;
    cin >> f >> s;
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<s; j++)
        {
            if(i%4==0)
            {
                if(j==s-1) cout << "#";
                else cout << ".";
            }
            else if (i%4 == 2)
            {
                if(j==0) cout << "#";
                else cout << ".";
            }
            else cout << "#";
        }
        cout << endl;

    }
}
