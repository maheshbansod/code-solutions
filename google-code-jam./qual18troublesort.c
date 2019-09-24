
#include <stdio.h>

/*modifies `v` : sort from low to high given that low to mid and mid to high are sorted */
void merge(long int *v, long int low, long int mid, long int high) {
	long int i=low, j=mid+1,k=low;
	long int b[100000];
	while(i <= mid && j<=high) {
		if(v[i]<v[j])
			b[k++]=v[i++];
		else b[k++]=v[j++];
	}
	while(i<=mid) {
		b[k++]=v[i++];
	}
	while(j<=high) {
		b[k++]=v[j++];
	}
	for(i=low;i<=high;i++) {
		v[i]=b[i];
	}
}

/*merge sort algorithm*/
void mergeSort(long int *v,long int low,long int high) {
	long int mid,i;
	if(low < high) {
		mid = (high+low)/2;
		mergeSort(v, low, mid); //[low,mid]
		mergeSort(v, mid+1, high); //(mid, high]
		merge(v, low, mid, high);
	}
}

int main() {
	int t, ti;
	long int v[100000],v1[50000],v2[50000],gt[100000],n, f, i, j;
	char done;

	scanf("%d", &t);
	for(ti=1;ti<=t;ti++) {
		scanf("%ld",&n);
		for(i=0;i<n;i++) {
			scanf("%ld", &v[i]);
		}

		/*dividing in two arrays: v1: even indexed elems. v2: odd indexed elems*/
		for(i=0, j=0;i<n-1;i+=2,j++) {
			v1[j]=v[i];
			v2[j]=v[i+1];
		}
		if(n%2!=0) v1[j]=v[n-1];

		/*sort them individually*/
		mergeSort(v1, 0, n/2+n%2-1);
		mergeSort(v2, 0, n/2-1);

		/* put v1 and v2 back in v */
		for(i=0;i<n/2+n%2;i++) {
			v[i*2]=v1[i];
		}
		for(i=0;i<n/2;i++) {
			v[i*2+1]=v2[i];
		}


		/*check if combined array is sorted*/

		f=-1; //OK: combined array sorted

		for(i=0;i<n-1;i++) {
			if(v[i]>v[i+1]) {
				f = i; //wrong position saved
				break;
			}
		}

		if(f==-1) printf("Case #%d: OK\n", ti);
		else printf("Case #%d: %ld\n",ti, f);
	}
}
