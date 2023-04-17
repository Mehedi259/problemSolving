#include <iostream>
using namespace std;

int main()
{
  int k, n, i;
  cin >> k;
  for(i=0;i<k;i++) {
    cin >> n;
    if(n>=1900) printf("Division 1\n");
    else if(n>=1600) printf("Division 2\n");
    else if(n>=1400) printf("Division 3\n");
    else printf("Division 4\n");
  }
  return 0;
}
