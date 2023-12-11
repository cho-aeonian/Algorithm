//N명의 학생의 수학점수가 입력되면
//각 학생의 석차를 입력된 순서대로 출력하는 프로그램
#include <stdio.h>

int main() {
	int a[2][100];
	int i,j,n;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[0][i]);
		a[1][i]=1;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[0][i]<a[0][j])
				a[1][i]++;
		}
	}
	for(i=0; i<n; i++) {
		printf("%d",a[1][i]);
	}
	return 0;
}