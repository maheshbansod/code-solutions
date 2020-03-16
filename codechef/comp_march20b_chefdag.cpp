#include <bits/stdc++.h>

using namespace std;

int main() {
  int t,n, k, i, j, a, lv, v[500];
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> t;
  while(t--) {
    cin >> n >> k;
    memset(v, 0, n*sizeof(int)+1);
    for(i=0;i<k;i++) {
      lv = 0;
      for(j=0;j<n;j++) {
        cin >> a;
        if(v[lv]==0) v[lv]=a;
        lv = a;
      }
    }
    cout << "op-";
    for(i=0;i<=n;i++) {
      cout << v[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
