#include <bits/stdc++.h>

#define inrange_i(x, a, b) ((x)>=(a) && (x)<=(b))
#define inrange_x(x, a, b) ((x)>(a) && (x)<(b))
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, l, r, c,ld;

  cin >> t;
  while(t--) {
    cin >> l >> r;
    c=0;
    while(l<=r) {
      ld = l%10;
      if(ld == 0) break;
      else if(ld == 2 || ld == 3 || ld == 9) c++;
      l++;
    }
    while(l<=r) {
      ld = r%10;
      if(ld == 0) break;
      else if(ld == 2 || ld == 3 || ld == 9) c++;
      r--;
    }
    if(l<r) {
      c+= 3*(r-l)/10;
    }
    cout << c << endl;
  }
  return 0;
}


