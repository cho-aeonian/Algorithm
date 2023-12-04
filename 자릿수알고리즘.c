//입력받은 자연수의 자릿수 합 중 합이 최대인 것을 출력하는 프로그램

#include<stdio.h>
int digit_sum(int x) {
	if(x==0)
		return 0;
	return x%10+digit_sum(x/10);
}

int main() {
	int n,i,max=0,temp,data,sum,max_sum;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%d",&data);
		sum=digit_sum(data);
		max_sum=digit_sum(max);
		if(sum>max_sum)
			max=data;
		else if(sum==max_sum)
			max=data>max? data:max;
	}
	printf("%d",max);
}