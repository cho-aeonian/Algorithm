#include <stdio.h>

int main() {
    int n, i, j, temp;
    int a[101];

    // 배열 크기 입력
    scanf("%d", &n);

    // 배열 원소 입력
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 음수를 양수보다 앞으로 정렬 (버블 정렬 사용)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > 0 && a[j + 1] < 0) {
                // Swap
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // 정렬 결과 출력
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}