#include <stdio.h>
#include <string.h>
#include <math.h>

long int calcDamage(char *str) {
	long int d=0,i,f=1;
	for(i = 0;i<strlen(str);i++) {
		if(str[i]=='C') {
			f*=2;
		}
		else d+=f;
	}

	return d;
}

void swap(char *a, char *b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int ti,t, i, n, ci;
	long int d, dam, swaps, lc;
	char str[32], temp, flag;
	scanf("%d", &t);
	for(ti=1;ti<=t;ti++) {
		scanf("%ld", &d);
		scanf("%s", str);
		dam = calcDamage(str);
		lc = swaps = 0;
		n = strlen(str);
		ci = n;
		for(i=0;i<n;i++) {
			if(str[i]=='C') {
				lc++; //count the number of c's
				ci = i; //save the index at which 'c' is present
			}
		}
		/*here lc contains the number of c's present and ci contains the index of the last 'C'*/


		while(n > 0) {
			flag = 0;
			for(i=ci+1;i<n && dam > d;i++) { //calculate damage when last c is shifted by one each iteration
				swaps++;
				dam = dam - pow(2, lc-1);
			}
			swap(&str[ci], &str[i-1]); //at this point, either i>=n or dam <= d(i.e. damage has been controlled)
			if(dam <= d) break; //damage controlled. so stop the loop.
			
			/*select next `ci` and set `n` to ignore the last part of the string*/
			n = i-1;
			for(i=n-1;i>=0;i--) {
				if(str[i]=='C') {
					lc--;
					ci = i;
					flag = 1; //set flag to 1 to indicate that `ci` was changed that means not all `C`'s have been completely shifted
					break;
				}
			}
			if(!flag) break;
		}
		
		if(dam > d) printf("Case #%d: IMPOSSIBLE\n", ti);
		else printf("Case #%d: %ld\n", ti, swaps);
	}
	return 0;
}
