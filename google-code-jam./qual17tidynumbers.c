#include <stdio.h>
#include <string.h>

main() {
	int ti, t,len,k,i,cp=0;
	char n[19];
	scanf("%d", &t);
	for(ti=1;ti<=t;ti++) {
		scanf("%s", n);
		len = strlen(n);
		cp=len-1;
		for(i=len-1;i>0;i--) {
			if(n[i]<n[i-1]) {
				n[i-1]-=1;
				k=i;
				while(k<len && n[k]!='9') {
					n[k]='9';
					k++;
				}
			}
		}
		for(i=0;i<len;i++) if(n[i]!='0') break;
		if(i!=0) {
			k=i;
			for(i=0;i<len;i++) {
				n[i]=n[k++];
			}
		}
		printf("Case #%d: %s\n", ti, n);
	}
}
