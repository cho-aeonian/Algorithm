//a자리의 자연수가 입력되면 입력된 자연수의
//자릿수 중 가장 많이 사용된 숫자를 출력하는 프로그램
#include<stdio.h>
int b[9];
int main() {
    char a[101];
    //int b[9]={0};
    int i, max=-1,index;
    scanf("%s",a);

    for(i=0; a[i]!='\0'; i++) {
        b[a[i]-'0']++;
    }
    for(i=0; i<10; i++) {
        if(b[i]>=max){
            max=b[i];
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}