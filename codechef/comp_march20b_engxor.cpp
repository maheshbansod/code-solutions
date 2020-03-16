#include <iostream>

using namespace std;

#define convertToPartialParity(x) x ^= (x>>1);\
  x ^= (x>>2);\
  x ^= (x>>4);\
  x ^= (x>>8);\
  x ^= (x>>16);\

int main() {
  int c, t, n, q, p, a[100001],i,j;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  while(t--) {
    cin >> n >> q;
    c=0;
    for(i=0;i<n;i++) {
      cin >> a[i];
      convertToPartialParity(a[i]);
      if(a[i]&1) c++;
    }
    for(i=0;i<q;i++) {
      cin >> p;
      convertToPartialParity(p);
      if(p&1) cout << c << " " << n-c << "\n";
      else cout << n-c << " " << c << "\n";
    }
  }
  return 0;
}
