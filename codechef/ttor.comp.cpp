#include <bits/stdc++.h>

#define inrange_i(x, a, b) ((x)>=(a) && (x)<=(b))
#define inrange_x(x, a, b) ((x)>(a) && (x)<(b))
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t,i,l;
  char m[26],s[101];

  cin >> t;
  cin >> m;
  while(t--) {
    cin >> s;
    l = strlen(s);
    for(i=0;i<l;i++) {
      if( inrange_i(s[i],'a','z') )
        s[i]=m[s[i]-'a'];
      else if( inrange_i(s[i],'A','Z') )
        s[i]=m[s[i]-'A']-32;
      else if(s[i]=='_')
        s[i]=' ';
    }
    cout << s << endl;
  }
  return 0;
}

