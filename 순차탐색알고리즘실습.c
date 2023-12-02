#include<stdio.h>
int search(int list[],int n,int key) {
	for(int i=0; i<n; i++) {
		if(key==list[i])
			return i+1;
	}
	return -1;
}

int main() {
	int list[65];
	int result, n, key,i;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&list[i]);
	}
	scanf("%d",&key);
	result=search(list,n,key);
	if(result==-1)
		printf("실패");
	else
		printf("%d",result);
	return 0;
}