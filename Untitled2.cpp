
#include <iostream>
using namespace std;
int main() {
    int n,sum = 0 ,i , max, x;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    max = a[0];
    for (i=1; i<n; i++)
    {
        if(max < a[i]) max = a[i];
        x = max*n - sum;

    }
    cout << x;

    return 0;
}
