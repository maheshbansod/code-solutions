#include <stdio.h>

int addNumber(int digit, int *list, int n) {
	int i;
	for(i=0;i<n;i++) {
		if(list[i]==digit)
			return 0;
	}
	list[i]=digit;
	return 1;
}

int main() {
	int t, ti, n;
	int nums[10],x,k,m;
	scanf("%d", &t);
	for(ti = 1; ti <= t;ti++) {
		scanf("%d", &n);
		printf("Case #%d: ", ti);
		x = n;
		m=1;
		k=0;
		if(n==0) printf("INSOMNIA\n");
		else {
		while(k < 10) {
			x=n*m;
			while(x > 0) {
				k+=addNumber(x%10, nums, k);
				x/=10;
			}
			m++;
		}
		printf("%d\n", n*(m-1));
		}
	}
	return 0;
}
