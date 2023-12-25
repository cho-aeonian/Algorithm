//값 입력받아서 배열의 크기 비교(앉은 키 비교)

#include<stdio.h>
int main() {
	int n, a[101], i, max,cnt=0;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	max=a[n-1];
	for(i=n-2; i>=0; i--) {
		if(a[i]>max) {
			cnt++;
			max=a[i];
		}
	}
	printf("%d",cnt);
}