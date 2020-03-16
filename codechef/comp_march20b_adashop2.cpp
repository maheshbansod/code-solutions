#include <bits/stdc++.h>

using namespace std;

int main() {
  int t,r[3],c[3],i,n;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> t;
  while(t--) {
    cin >> r[0] >> c[0];
    i=1;
    if(r[0]-c[0] != 0) { //not on center diag
      n = (r[0]-c[0])/2;
      r[1] =r[0]- n;
      c[1] =c[0]+ n;
      i++;
    }
    if(r[i-1] != 1 || c[i-1] != 1) {
      r[i] = 1; c[i] = 1;
      i++;
    }
    cout << i+18 << "\n";
    n=i;
    for(i=1;i<n;i++) {
      cout << r[i] << " " << c[i] << "\n";
    }
    cout << "2 2\n1 3\n3 1\n4 2\n1 5\n5 1\n6 2\n1 7\n7 1\n8 2\n2 8\n7 3\n8 4\n4 8\n7 5\n8 6\n6 8\n7 7\n8 8\n";
  }

  return 0;
}
