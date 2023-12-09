//한 세대의 N초 동안의 실시간 측정치가 주어지면
//최대 연속으로 경보음이 울린 시간을 구하는 프로그램
#include <stdio.h>
int main() {
	int n, m, data, i, cnt=0, max=-1;
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		scanf("%d", &data);
		if(data>m){
			cnt++;
			if(cnt>max) max = cnt;
		}
			else cnt =0;
	}
	printf("%d", max);
	return 0;
}