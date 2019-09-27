#include <stdio.h>

#define MAXLEN 100000

/*Simply replace every 'S' from Lydia's path to 'E' and every 'E' to 'S'*/
int main() {
    int ti, t,i;
    long int n;
    char lydpath[MAXLEN];
    scanf("%d", &t);

    for(ti=1;ti<=t;ti++) {
        scanf("%ld", &n);
        scanf("%s", lydpath);
        
        printf("Case #%d: ", ti);
        
        n = 2*n-2;
        for(i=0;i<n;i++) {
            if(lydpath[i]=='E') printf("S");
            else printf("E");
        }
        printf("\n");
    }
    return 0;
}
