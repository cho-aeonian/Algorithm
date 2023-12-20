#include<stdio.h>

int main() {
    int n, age, max=-1, min=1000, i;
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        scanf("%d",&age);
        if(age>max) max=age;
        if(age<min) min=age;
    }
    printf("%d", max-min);
    return 0;
}