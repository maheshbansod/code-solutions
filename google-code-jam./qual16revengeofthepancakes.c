#include <stdio.h>

int countSteps(char *str) {
	int i,n=0;
	char c=str[0];
	for(i=0;str[i]!='\0';i++) {
		if(str[i]!=c) {
			c=str[i];
			n++;
		}
	}
	if(str[i-1]=='-') n+=1;
	return n;
}

int main() {
	int t, ti, n;
	char str[101];
	scanf("%d", &t);
	for(ti=1;ti<=t;ti++) {
		scanf("%s", str);
		n=countSteps(str);
		printf("Case #%d: %d\n", ti, n);
	}
}
