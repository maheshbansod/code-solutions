#include <bits/stdc++.h>

using namespace std;

int main() {
  int t,n, i, j, a[100], max;
  char isbad;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> t;
  while(t--) {
    cin >> n;
    isbad = max = 0;
    for(i=0;i<n;i++) {
      cin >> a[i];
      if(isbad) continue;
      if(max < a[i]) {
        max = a[i];
      } else if(max > a[i]) {
       for(j=i-2;j>=0;j--) {
          if(a[j] > a[i]) {
            isbad=1;
            break;
          }
        }
      }
    }
    if(!isbad) cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
  return 0;
}
