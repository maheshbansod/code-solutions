#include <stdio.h>
#include <string.h>

int flip3(int i, int k, char *str) {
	int n = strlen(str);
	int j=0;
	for( ;j<k && i<n;i++) {
		str[i]=(str[i]=='+')?'-':'+';
		j++;
	}
	if(j==k) return 1;
	else return 0;
}

int main() {
	int ti, t, k,i,c, n;
	char str[1001];
	scanf("%d", &t);
	for(ti=1;ti<=t;ti++) {
		scanf("%s", str);
		scanf("%d", &k);
		n=strlen(str);
		c=0;
		i=0;
		printf("Case #%d: ", ti);
		while(i<n) {
			if(str[i]=='-') {
				if(!flip3(i,k, str))  {
					printf("IMPOSSIBLE\n");
					c=-1;
					break;
				} else c++;
			}
			i++;
		}
		if(c!=-1) {
			printf("%d\n", c);
		}
	}
}
