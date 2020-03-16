#include <bits/stdc++.h>

using namespace std;

int main() {
  int t,n, q, a[100002],p[3], c, i, j, cd, od;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> t;
  while(t--) {
    cin >> n >> q;
    for(i=1;i<=n;i++) {
      cin >> a[i];
    }
    for(i=0;i<q;i++) {
      cin >> p[0] >> p[1] >> p[2];
      od = a[p[0]]-p[2];
      c=0;
      for(j=p[0]+1;j<=p[1];j++) {
        cd = a[j]-p[2];
        if( ((cd^od)>>31) || !cd || !od) {
          c++;
        }
        od = cd;
      }
      cout << c<<"\n";
    }
  }

  return 0;
}
