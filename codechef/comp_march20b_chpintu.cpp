#include <iostream>
#include <string.h>

using namespace std;

int main() {
  int t,n, m, p,fruits[50],fcost[50], i, j, mcost;

  cin >> t;
  while(t--) {
    cin >> n >> m;
    memset(fcost, 0, m*sizeof(int));
    for(i=0;i<n;i++) {
      cin >> fruits[i];
    }
    for(i=0;i<n;i++) {
      cin >> p;
      if(fcost[fruits[i]-1]==0) fcost[fruits[i]-1]++;

      fcost[fruits[i]-1]+=p;
    }
    mcost = fcost[0];
    for(i=0;i<m;i++) {
      if(fcost[i] != 0) {
        mcost=fcost[i];
        break;
      }
    }
    for(i=0;i<m;i++) {
      if(fcost[i]<mcost && fcost[i]>0) mcost=fcost[i];
    }
    cout << mcost-1 << endl;
  }
  return 0;
}
