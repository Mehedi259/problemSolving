#include<iostream>
using namespace std;
int main()
{
    int a,b,div,sum=0;
    cin >> a >> b;
    if(a>=b){
    div = a/b;
    sum = a+div;
    }
    cout << sum;
}
