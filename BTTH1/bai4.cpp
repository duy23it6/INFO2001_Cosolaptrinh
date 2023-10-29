#include <stdio.h>
int main(){
	int n, i, x, sum;
	printf("nhap so x:");
	scanf("%d", &x);
	for(int i=1; i<=x; i++){
		if(i%2!=0){
			printf("%d\n", i);
		}
	}
	n=(x-1)/2+1;
	printf("so so le dau tien la:%d\n", n);
	sum=(1+x)*n/2;
	printf("sum=%d", sum);
	return 0;
}
