#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    long long int altsum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i%2==0){
            altsum-=arr[i];
        }
        else{
            altsum+=arr[i];
        }
    }
    if(n%2==1||altsum>=0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
