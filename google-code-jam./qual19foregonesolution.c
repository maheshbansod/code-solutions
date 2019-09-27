#include <stdio.h>
#include <string.h>

int main() {
    char x[101],b[101];
    int t,i,j;
    
    scanf("%d", &t);

	/* This algorithm makes two numbers A and B such that
	 * A: the original number with '4' replaced with '2'
	 * B: the original number with '4' replaced with '2'
	 *  and every other number replaced by '0'*/
    for(i=1;i<=t;i++) {
        scanf("%s", &x);
        for(j=0;j<strlen(x);j++) {
            if(x[j]=='4') {
                x[j]='2';
                b[j]='2';
            } else {
                b[j]='0';
            }
        }
        b[j]='\0';

        printf("Case #%d: %s %s\n", i, x, b);
    }
}
